#include "main.h"
/**
 * error_handler - exits the program with an error code and
 * prints an error message to stderr
 * @cmd: the error command to exit the program with
 * @msg: the error message to print to stderr
 * Return: void
 */
void error_handler(int cmd, const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(cmd);
}

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: on success 0
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t readBytes, writeBytes;

	if (argc != 3)
	{
		error_handler(97, "Usage: cp file_from file_to");
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((readBytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		writeBytes = write(fd_to, buffer, readBytes);
		if (writeBytes != readBytes)
			error_handler(99, "Error: Write failed");
	}
	if (readBytes == -1)
		error_handler(99, "Error: Read failed");
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);
}
