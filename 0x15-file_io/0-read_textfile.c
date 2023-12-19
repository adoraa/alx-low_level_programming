#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: the filename
 * @letters: number of letters to read and printed
 * Return: the actual number of letters it can read and print,
 * 0 if the file can not be opened or read or filename is NULL
 * or if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *temp;
	ssize_t readBytes, writeBytes;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	temp = malloc(sizeof(char) * (letters + 1));
	if (!temp)
	{
		close(fd);
		return (0);
	}
	readBytes = read(fd, temp, letters);
	if (readBytes < 0)
	{
		free(temp);
		close(fd);
		return (0);
	}
	temp[readBytes] = '\0';
	writeBytes = write(STDOUT_FILENO, temp, readBytes);
	free(temp);
	close(fd);
	if (writeBytes != readBytes)
		return (0);
	return (readBytes);
}
