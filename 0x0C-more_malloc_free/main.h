#ifndef MAIN_H
#define MAIN_H

/* _putchar function prototype */
int _putchar(char c);

/* malloc_checked function prototype */
void *malloc_checked(unsigned int b);

/* string_nconcat function prototype */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* _calloc function prototype */
void *_calloc(unsigned int nmemb, unsigned int size);

/* array_range function prototype */
int *array_range(int min, int max);

/* _realloc function prototype */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* _isdigit function prototype */
int _isdigit(char *s);

/* _strlen function prototype */
int _strlen(char *num1, char *num2);

/* mulstr function prototype */
int *mulstr(char *num1, char *num2, int size);

/* arr_to_str function prototype */
char *arr_to_str(int *arr, int size);

#endif
