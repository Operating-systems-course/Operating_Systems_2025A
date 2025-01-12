#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }
    
    puts("Test");

    return 0;
}
