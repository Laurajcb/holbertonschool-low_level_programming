#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t pid, p_pid;
    pid_t child_pid;
    int status;

    printf("Inicio programa\n");
    pid = getpid();
    p_pid = getppid();

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        printf("Soy el hijo\n");
        printf("Wait for me, wait for me\n");
        sleep(6);
        printf("Wait for me, wait for me2\n");
    }
    else
    {
        wait(&status);
        printf("Soy el padre\n");
        printf("Oh, it's all better now\n");
    }
    return (0);
}