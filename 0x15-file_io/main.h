#ifndef MAIN_H
#define MAIN_H

/* Standard Library Headers */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* Custom Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);

#endif