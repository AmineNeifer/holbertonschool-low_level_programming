#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - does the same as cp, the command
 * @ac: arg counter.
 * @av: arg vector.
 * Return: 0.
 */
int main(int ac, char **av)
{
int fd, fd2, count = 1024, r, w, cl, cl1;
char *buf = malloc(5000);
if (buf == NULL)
return (0);
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
fd = open(av[1], O_EXCL | O_RDONLY);
r = read(fd, buf, count);
if (fd == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read to %s\n", av[1]);
exit(98);
}
w = write(fd2, buf, r);
if (fd2 == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
cl = close(fd);
if (cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
cl1 = close(fd2);
if (cl1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
free(buf);
return (0);
}
