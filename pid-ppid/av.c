#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int ac, char **av)
{
    (void)ac;
    while (*av != NULL)
    {
        printf("%s\n", *av);
	av++;
    }
    return (0);
}