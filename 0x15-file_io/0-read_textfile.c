#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - read a text file and print it.
 * @filename: name of the file to read.
 * @letters: number of letters the funct should read and write.
 * Return: number of characters written otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, r, w;
char *s = malloc(letters);
if (s == NULL)
return (0);
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
r = read(fd, s, letters);
if (r == -1)
return (0);
w = write(STDOUT_FILENO, s, r);
if (w == -1)
return (0);
close(fd);
return (w);
}
