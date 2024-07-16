#ifndef MAIN_H
#define MAIN_H

/* _putchar function prototype */
int _putchar(char c);

/* create_array function prototype */
char *create_array(unsigned int size, char c);

/* _strdup function prototype */
char *_strdup(char *str);

/* str_concat function prototype */
char *str_concat(char *s1, char *s2);

/* alloc_grid function prototype */
int **alloc_grid(int width, int height);

/* free_grid function prototype */
void free_grid(int **grid, int height);

/* argstostr function prototype */
char *argstostr(int ac, char **av);

#endif
