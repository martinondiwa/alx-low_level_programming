#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUF_SIZE 1024

/**
 * print_error - prints error messages to stderr and exits
 * @message: error message to print
 * @exit_code: exit code to use
 */
void print_error(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * copy_file - copies content from one file to another
 * @file_from: file descriptor of the source file
 * @file_to: file descriptor of the destination file
 */
void copy_file(int file_from, int file_to)
{
	char buf[BUF_SIZE];
	int num_read, num_written;

	while ((num_read = read(file_from, buf, sizeof(buf))) > 0)
	{
		num_written = write(file_to, buf, num_read);
		if (num_written < num_read)
			print_error("Error: Can't write to file", 99);
	}

	if (num_read == -1)
		print_error("Error: Can't read from file", 98);
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: argument strings
 *
 * Return: 0 on success, or a different exit code on error
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
		print_error("Usage: cp file_from file_to", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file", 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		close(file_from);
		print_error("Error: Can't write to file", 99);
	}

	copy_file(file_from, file_to);

	if (close(file_from) == -1)
		print_error("Error: Can't close fd", 100);

	if (close(file_to) == -1)
		print_error("Error: Can't close fd", 100);

	return (0);
}
