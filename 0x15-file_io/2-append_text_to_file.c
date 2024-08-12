#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of file
 * @text_content: Content to append to end of file
 *
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_des;
	int content;
	int contentAppend;

	if (filename == NULL)
	{
		return (-1);
	}

	f_des = open(filename, O_WRONLY | O_APPEND);
	if (f_des == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	content = 0;
	while (text_content[content])
	{
		content++;
	}

	contentAppend = write(f_des, text_content, content);
	if (contentAppend == -1 || contentAppend != content)
	{
		close(f_des);
		return (-1);
	}
	close(f_des);

	return (1);
}
