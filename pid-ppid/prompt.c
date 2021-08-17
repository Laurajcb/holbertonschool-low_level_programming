#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *prompt = "$";
	char *line;
	int readed_char = 0;
	size_t line_sz;

	while (1)
	{
		write(STDOUT_FILENO, prompt, strlen(prompt));
		readed_char = getline(&line, &line_sz, stdin);
		if (readed_char == -1)
		{
			return (-1);
		}
		write(STDOUT_FILENO, line, readed_char);
	}
	return (readed_char);
}