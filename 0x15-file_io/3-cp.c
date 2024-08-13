#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void process_errors(int src, int dest, char **av);

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Array of argument strings passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int f_src, f_dest, cls, cld;
	ssize_t r_content, w_content, wt;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_src = open(argv[1], O_RDONLY);
	if (f_src == -1)
		process_errors(f_src, 0, argv);

	f_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_dest == -1)
	{
		close(f_src);
		process_errors(0, f_dest, argv);
	}

	while ((r_content = read(f_src, buffer, sizeof(buffer))) > 0)
	{
		wt = 0;
		while (wt < r_content)
		{
			w_content = write(f_dest, buffer + wt, r_content - wt);
			if (w_content == -1)
			{
				close(f_src);
				close(f_dest);
				process_errors(0, -1, argv);
			}
			wt += w_content;
		}
	}
	if (r_content == -1)
		process_errors(-1, 0, argv);
	cls = close(f_src);
	if (cls == -1)
		process_errors(f_src, 0, NULL);

	cld = close(f_dest);
	if (cld == -1)
		process_errors(0, f_dest, NULL);

	return (0);
}

/**
 * process_errors - Handles file processing errors
 * @src: Source file descriptor
 * @dest: Destination file descriptor
 * @av: Array of argument strings
 *
 * Return: Void
 */

void process_errors(int src, int dest, char **av)
{
	if (src != 0 && av != NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else if (dest != 0 && av != NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	else if (src != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	else if (dest != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
}
