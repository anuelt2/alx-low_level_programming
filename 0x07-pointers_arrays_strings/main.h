#ifndef MAIN_H
#define MAIN_H

/* _putchar function prototype */
int _putchar(char c);

/* _memset function prototype */
char *_memset(char *s, char b, unsigned int n);

/* _memcpy function prototype */
char *_memcpy(char *dest, char *src, unsigned int n);

/* _strchr function prototype */
char *_strchr(char *s, char c);

/* _strspn function prototype */
unsigned int _strspn(char *s, char *accept);

/* _strpbrk function prototype */
char *_strpbrk(char *s, char *accept);

/* _strstr function prototype */
char *_strstr(char *haystack, char *needle);

/* print_chessboard function prototype */
void print_chessboard(char (*a)[8]);

/* print_diagsums function prototype */
void print_diagsums(int *a, int size);

#endif
