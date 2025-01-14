#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
    int fd[2];
    if(pipe(fd)!=0){

        perror("faild");
        return 1;
    }

    write(fd[1],"Hello",6);

    char msg[6];
    read(fd[0],msg,6);

    puts(msg);


    close(fd[0]);
    close(fd[1]);




    return 0;
}
