#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define SIZE 10

int main(int argc, char const *argv[])
{
    char s[] = "barak";
    // barrak
    // karrab
    // karrab
    // karrab
    // karrab
    //   ||

    printf("%p\n", s);
    int i = 0, j = 4;
    while ((s + i) < (s + j))
    {
        printf("%p - %p\n", (s + i), (s + j));
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch;
        i++;
        j--;
    }
    puts(s);
    //

    return 0;
}