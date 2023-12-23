#include "main.h"
/**
 * _strlen - returns string length
 * @s: string to be checked
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
		;
	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writeBytes;

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content[0] != '\0')
	{
		writeBytes = write(fd, text_content, _strlen(text_content));
		if (writeBytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
