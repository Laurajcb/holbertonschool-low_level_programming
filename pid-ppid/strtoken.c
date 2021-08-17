#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _strlen(char *str)
{
        int i = 0;

        while(str[i])
                i++;
        return (i);
}

int main()
{
    char line[] = " hola como estan ?";
    const char *s = " ";
    char *token;
    char  n_line = '\n';
    char *new_line;
    
    new_line = &n_line;
    token = strtok(line, s);

    while (token != NULL)
    {
        write(STDOUT_FILENO, token, _strlen(token));
        write(STDOUT_FILENO, new_line, 1);
        token = strtok(NULL, s);
    }

    return (token);
}