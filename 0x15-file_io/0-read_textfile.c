#include "main.h"

/**
 * read_textfile - Reads text file and prints to POSIX standard output
 * @filename: Name of text file
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_des;
	ssize_t lettersRead;
	ssize_t lettersWrite;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	f_des = open(filename, O_RDONLY);
	if (f_des == -1)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(f_des);
		return (0);
	}

	lettersRead = read(f_des, buffer, letters);
	if (lettersRead == -1)
	{
		free(buffer);
		close(f_des);
		return (0);
	}

	lettersWrite = write(STDOUT_FILENO, buffer, lettersRead);
	free(buffer);
	if (lettersWrite == -1 || lettersWrite != lettersRead)
	{
		close(f_des);
		return (0);
	}

	return (lettersWrite);
}
