#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file to be created
 * @text_content: String to write to file
 *
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int f_des;
	int content;
	int contentWrite;

	if (filename == NULL)
	{
		return (-1);
	}

	f_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f_des == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	else
	{
		content = 0;
		while (text_content[content])
		{
			content++;
		}
	}

	contentWrite = write(f_des, text_content, content);
	if (contentWrite == -1 || contentWrite != content)
	{
		close(f_des);
		return (-1);
	}
	close(f_des);

	return (1);
}
