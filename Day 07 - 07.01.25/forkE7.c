#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    printf("Main PID -> %d\n", getpid());
    puts("Hello Before");
    puts("Hello Before");
    puts("Hello Before");
    puts("Hello Before");

    if (fork() == 0)
    {
        
        char *str[] ={"./test","ddd","ggg","Ron",NULL};
        execvp(str[0],str);
        exit(0);
    }
    printf("PID -> %d\n", getpid());
    puts("Hello main");

    return 0;
}
