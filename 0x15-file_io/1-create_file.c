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
 * create_file - creates a file
 * @filename: filename
 * @text_content: a NULL terminated string to write to the file
 * Return: -1 if filename is NULL, 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writeBytes;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
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
