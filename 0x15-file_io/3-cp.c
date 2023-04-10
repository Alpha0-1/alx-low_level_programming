/*
 * cp - program that copies the content of a file to another file.
 * @file_from: path of the file to read from
 * @file_to: path of the file to write to
 * Return: 0 on success
 */
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * main - entry point
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 * Return: 0 on success, appropriate error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t nread;
	char buf[BUF_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);

	do {
		nread = read(fd_from, buf, BUF_SIZE);
		if (nread == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

		if (write(fd_to, buf, nread) != nread)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
	} while (nread > 0);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			fd_to), exit(100);

	return (0);
}
