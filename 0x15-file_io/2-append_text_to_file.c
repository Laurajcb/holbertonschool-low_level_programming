#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL-1.
 *         If the file does not exist the user lacks write permissions -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng]; leng++)
		{
		}

		op = open(filename, O_WRONLY | O_APPEND);
		wr = wirte(op, text_content, leng);

		if (op == -1 || wr == -1)
			return (-1);

		close(op);

		return (1);
	}
}
