#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    puts("Hello Before");
    puts("Hello Before");
    puts("Hello Before");
    puts("Hello Before");
    puts("Hello Before");

    fork();
    

    // int run = -1;
    // run=fork();


    // if(run==0){

    // }
    puts("Hello main");



    return 0;
}
