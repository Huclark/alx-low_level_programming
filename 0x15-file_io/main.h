#ifndef MAIN_H
#define MAIN_H

/* Standard Library Headers */
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/* Custom Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *buffer_creator(char *file);
void exit_file(int fd);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
