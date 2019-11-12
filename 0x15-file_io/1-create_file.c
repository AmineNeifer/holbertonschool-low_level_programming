#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_file - create a file
 * @filename: name of the file to read.
 * @text_content: text we want to be in the file
 * Return: 1 if it succeeds and -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
int fd, i = 0, w;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[i])
i++;
w = write(fd, text_content, i);
if (w == -1)
return (0);
close(fd);
return (1);
}
