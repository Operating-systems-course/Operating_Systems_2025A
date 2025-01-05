#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{

    int num = 9;
    int *pointer = &num;

    printf("%d\n", *pointer);

    int *misPointer = malloc(4);
    printf("%d\n", *misPointer);
    *misPointer=8;
    printf("%d\n", *misPointer);

    free(misPointer);

    int *mis1Pointer = (int *)malloc(sizeof(int));

    printf("%d\n", *mis1Pointer);
    *mis1Pointer = 8;
    printf("%d\n", *mis1Pointer);

    free(mis1Pointer);
    // printf("%d\n", *(mis1Pointer + 1));

    int *arr = (int *)malloc(sizeof(int) * 20);
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", *(arr + i));
    }

    for (int i = 0; i < 20; i++)
    {
        *(arr + i) = i * 7;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", *(arr + i));
    }

    free(arr);

    //---------------------------------
    int size;
    printf("Enter size\n");
    scanf("%d", &size);
    int *arr1 = (int *)malloc(sizeof(int) * size);
    puts("-----------------------------------------------------------");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr1 + i));
    }

    for (int i = 0; i < size; i++)
    {
        *(arr1 + i) = i * 7;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr1 + i));
    }
    free(arr1);

    int *callocArray = (int *)calloc(80, sizeof(int));

    callocArray = realloc(callocArray, 70);

    char ch;
    int len = 0;
    char *input = (char *)malloc(sizeof(char) * (len + 1));
    *input = '\0';

    // ch = getchar();
    // printf("%c\n", ch);
    // ch = getchar();
    // printf("%c\n", ch);
    // ch = getchar();
    // printf("%c\n", ch);
    while ((ch = getchar()) != '\n')
    {
        printf("%c", ch);
    }

    char ch;
    int len = 0;
    char *input = (char *)malloc(sizeof(char) * (len + 1));
    *input = '\0';
    while ((ch = getchar()) != '\n')
    {
        *(input+len)=ch;
        input=(char*)realloc(input,(++len+1));
        
    }
    *(input+len+1)='\0';

    puts(input);

    char location[256];
    if (getcwd(location, sizeof(location)) == NULL){
        puts("Error");
        return;
    }
    printf("\033[0;34m");
    printf("%s",location);
    printf("\033[0m");
    return 0;
}
