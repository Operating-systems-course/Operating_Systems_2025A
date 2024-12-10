#include <stdio.h>
#include "math.h"

int main(int argc, char const *argv[])
{

    int p = _pow(2,4);
    int fact = factorial(4);
    int mx = max(3,7);
    int mn = min(3,7);
    int s = sum(10);


    printf("%d\n",p);
    printf("%d\n",fact);
    printf("%d\n",mx);
    printf("%d\n",mn);
    printf("%d\n",s);
    

    printf("%d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }

    return 0;
}
