#include <stdio.h>
#include <string.h>
#define SIZE 10

int size(char str[])
{
    int c = 0;
    while(str[c]){
        c++ ;   
    }
    return c;
}

int main(int argc, char const *argv[])
{
    int num = 4;
    int arr[] = {0, 0};
    printf("Enter number\n");
    // scanf("%d", &num);
    printf("%d", num);
    printf("%c", num);
    printf("%x", num);

    // scanf("%d",arr);
    // scanf("%d",arr+1);
    // scanf("%d",&arr[1]);

    char ch = 97;
    printf("%c", ch);
    printf("%d", ch);

    printf("Enter char\n");
    // ch = getchar();

    // scanf("%d",arr);

    char str[] = "Hello world";
    printf("%s\n", str);
    puts(str);
    printf("strlen = %ld\n", strlen(str));
    printf("size = %d\n", size(str));
    str[5] = '\0';
    printf("%s\n", str);
    puts(str);
    printf("strlen = %ld\n", strlen(str));
    printf("size = %d\n", size(str));

    

    puts(&str[6]);
    printf("strlen = %ld\n", strlen(str+6));
    printf("size = %d\n", size(str+6));



    return 0;
}
