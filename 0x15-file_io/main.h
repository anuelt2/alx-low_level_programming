#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/* _putchar function prototype */
int _putchar(char c);

/* read_textfile function prototype */
ssize_t read_textfile(const char *filename, size_t letters);

/* create_file function prototype */
int create_file(const char *filename, char *text_content);

/* append_text_to_file function prototype */
int append_text_to_file(const char *filename, char *text_content);

#endif
