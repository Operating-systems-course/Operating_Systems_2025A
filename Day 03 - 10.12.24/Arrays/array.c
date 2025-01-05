#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(int argc, char const *argv[])
{
    int size;
    scanf("%d", &size);

    int arr[SIZE];

    arr[0] = 6;
    arr[100] = 2;

    int arr2[] = {1, 2, 3, 4, 5};

    int arr3[10];

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", arr3[i]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%p\n", arr3 + i);
    }

    printf("%p\n", arr3);
    printf("%p\n", arr3 + 1);
    printf("%p\n", &arr3[1]);
    // printf("%p\n", &arr3[19]);
    // printf("%d\n", arr3[19]);
    char str[] = "barak";
    char str2[] = {'b', 'a', 'r', 'a', 'k'};
    char str3[6];
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", str3[i]);
    }
    puts(str3);

    str3[0] = 'b';
    str3[5] = '\0';

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", str3[i]);
    }

    printf("%ld\n", strlen(str));

    puts(str);
    puts(str3);
    int index = 0;
    while (str3[index])
    {
        printf("%d",str3[index++]);
    }
    return 0;
}
