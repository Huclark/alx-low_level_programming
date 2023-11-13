## Step 1
Clone the `gm` repository.

## Step 2
Check which type of library calls are used by the `gm` program by running the `ldd`command: 

```
ldd ./gm
```

***Output***:<br>

```
linux-vdso.so.1 (0x00007ffd211d5000)  
libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fbf02fa3000)  
/lib64/ld-linux-x86-64.so.2 (0x00007fbf031d6000)
```

The library used by the program is `libc.so` which is the C standard library.

## Step 3
To get more information on all functions called by the program we need to use the `ltrace` command:
```
ltrace ./gm 9 8 10 24 75 9
```

*Note*: You may need to install `ltrace` if you do not have it. Use this command:
```
sudo apt install ltrace
```
Now run the command again<br>
***Output***:
```
__libc_start_main(0x400ba9, 7, 0x7ffef8509128, 0x400d00 <unfinished ...>
atoi(0x7ffef850b23e, 0x7ffef8509128, 0x7ffef8509168, 0x400d00)                                           = 9
atoi(0x7ffef850b240, 9, 0, 0x7ffef850b23f)                                                               = 8
atoi(0x7ffef850b242, 8, 0, 0x7ffef850b241)                                                               = 10
atoi(0x7ffef850b245, 10, 0, 0x7ffef850b244)                                                              = 24
atoi(0x7ffef850b248, 24, 0, 0x7ffef850b247)                                                              = 75
atoi(0x7ffef850b24b, 75, 0, 0x7ffef850b24a)                                                              = 9
time(0)                                                                                                  = 1699890996
srand(0x65524734, 0x7ffef8508fc8, 0x7ffef8591080, 16)                                                    = 1
rand(0xffffffff, 0x7f9fd187f860, 0x7f9fd187f204, 0x7f9fd187f280)                                         = 0x67aa1440
rand(0x7f9fd187f860, 0x7ffef8508f54, 13, 0x67aa1440)                                                     = 0x31825e48
rand(0x7f9fd187f860, 0x7ffef8508f54, 1, 0)                                                               = 0x19587d81
rand(0x7ffef8508ff0, 13, 4, 4)                                                                           = 0x687b5999
rand(0x7ffef8508ff0, 13, 8, 8)                                                                           = 0x270e6737
rand(0x7ffef8508ff0, 13, 12, 12)                                                                         = 0xe9aa483
printf("%d ", 1)                                                                                         = 2
printf("%d ", 23)                                                                                        = 3
printf("%d ", 5)                                                                                         = 2
printf("%d ", 2)                                                                                         = 2
printf("%d ", 59)                                                                                        = 3
printf("- %d\n", 131 23 5 2 59 - 13
)                                                                                     = 5
puts("Sorry, try again!"Sorry, try again!
)                                                                                = 18
+++ exited (status 0) +++
```

Some functions used by the program are `atoi()`, `time()`, `srand()`, `rand()`, `printf()` and `puts`.

From this information, we are able to tell that the program first prints each number on the ticket followed by the corresponding message on a new line.

## Step 4
We need to find out what corresponding message is printed to `stdout` when a ticket is won. To do that we need to run thr `strings` command:
```
strings gm
```

Focus on the messages printed to `stdout`:

***Output***:
```
Congratulations, you win 1 point
Congratulations, you win 2 points
Congratulations, you win 5 points
Congratulations, you win 50 points
Congratulations, you win 500 points
Congratulations, you win 5,000 points
Congratulations, you win 1,000,000 points
Congratulations, you win the Jackpot!
Sorry, try again!
```

When we win we get the message: **`Congratulations, you win the Jackpot!`**

## Step 5
Now we need to inject the `printf()`function call to change the behaviour of the program.<br>

To do this we have to create a new C file which redefines the `printf()` function. In our C file, we need to use the exact prototype for the `printf()` function: `int printf(const char *format, ...);`

See  ```man 3 printf```.

See [inject.c]

Now compile the C file into an object file and add this object file to a new shared library:

```
gcc -fpic -c inject.c
```


```
gcc -shared -o libinj.so inject.o
```

Finally we need to change the `LD_PRELOAD` environmental variable to instruct the operating system to load our shared library file first before loading any other shared library using 

```
export LD_PRELOAD=/$PWD/libinj.so
```

## Step 6
Finally, run the `gm` program with the user's ticket numbers `9 8 10 24 75 9`:
```
./gm 9 8 10 24 75 9
```

***Output***:
```
9 8 10 24 75 - 9
Congratulations, you win the Jackpot!
```
