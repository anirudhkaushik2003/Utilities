#include <unistd.h>
#include <string.h>
#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    int process_id = fork();
    /*printf("proce ss_id = %d\n",process_id);
    printf("getpid return value = %d\n",getpid());
    printf("getppid return value = %d\n",getppid());*/
    char *args[4];
    args[0] = "echo";
    args[1] = "This worked";
    args[2] = NULL;
    char *command;
    command = malloc(sizeof(char)*100);
    while (1)
    {

        if (process_id == 0)
        {
            execvp(args[0], args);
        }
        else
        {
            scanf("%s", command);
            if (strcmp(command, "fork") == 0)
            {
                process_id = fork();
                printf("process_id = %d\n",process_id);
            }
        }

        char *str;
        str = malloc(sizeof(char) * 100);
        struct passwd *p = getpwuid(getuid());
        strcpy(str, p->pw_name);
        printf("string = %s\n", str);
        strcpy(str, p->pw_dir);
        printf("string = %s\n", str);
    }
}