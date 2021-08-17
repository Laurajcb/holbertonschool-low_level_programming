#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void)
{
    pid_t child_pid;
    int status;

    char *argv[] = {"/home/vagrant/holbertonschool-low_level_programming/pid-ppid/w", NULL};
    int execution;

    child_pid = fork();
    if (child_pid == 0)
    {
        printf("exeve try\n");
        execution = execve(argv[0], argv, NULL);
        if (execution == -1)
        {
            perror("Error");
        }
    }
    else
    {
        wait(&status);
        printf("Allready done, status: %d\n", status);
    }

    
    return (0);
}