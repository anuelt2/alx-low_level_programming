/* Declaration of protopype of _putchar */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: Void (Success)
 */
int print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}
