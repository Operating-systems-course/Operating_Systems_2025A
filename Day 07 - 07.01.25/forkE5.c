#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    printf("Main PID -> %d\n",getpid());
    puts("Hello Before");
    puts("Hello Before");
    puts("Hello Before");
    puts("Hello Before");

    fork();
    
    for (size_t i = 0; i < 7000; i++)
    {
        printf("%d\n",(getpid()));
    }
    

    puts("Hello Before");

    

    // int run = -1;
    // run=fork();


    // if(run==0){

    // }
    printf("PID -> %d\n", getpid());
    puts("Hello main");



    return 0;
}
