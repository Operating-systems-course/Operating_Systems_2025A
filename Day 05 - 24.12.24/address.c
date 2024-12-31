#include <stdio.h>
#include "address.h"

void swap(int, int);
void swapByPointer(int *p1, int *p2);

int main(int argc, char const *argv[])
{
    int i = 10;
    printf("%p\n", &i);

    int arr[] = {1, 2, 3};
    printf("arr address-> %p\n", arr);
    printf("arr address with & -> %p\n", &arr);

    printf("read with * arr[0]-> %d\n", *arr);
    printf("read with * arr[1]-> %d\n", *(arr + 1));

    int *j = &i;
    int *p = arr;

    printf("p address->%p\n", p);
    printf("p [0]-> %d\n", *p);
    printf("p [1]-> %d\n", *(p + 1));

    *p = 8;
    printf("read with * arr[0]-> %d\n", *arr);
    printf("p [0]-> %d\n", *p);

    printf("%d\n", i);
    printf("%d\n", *j);
    printf("%p\n", j);
    printf("%p\n", &j);

    *j = 22;

    printf("%d\n", i);
    printf("%d\n", *j);

    int num1 = 2, num2 = 8;
    printf("%d %d\n", num1, num2);
    swap(num1, num2);
    printf("%d %d\n", num1, num2);


    printf("%d %d\n", num1, num2);
    swapByPointer(&num1, &num2);
    printf("%d %d\n", num1, num2);

    char ch='a';
    char *cp = &ch;

    int matrix[][3] = {{1,2,3},
                        {4,5,6}};

    // matrix[0][2]

    int** pMat;
    pMat = matrix;
    
    

    printf("%p\n",matrix);
    printf("%p\n",pMat);
    printf("%p\n",matrix[0]);
    printf("%p\n",pMat[0]);
    printf("%p\n",*pMat);
    printf("%p\n",*(pMat+0));
    printf("%p\n",*(pMat+1));
    printf("%p\n",matrix[1]);
    printf("%p\n",pMat[1]);

    printf("%d\n",*(*(pMat+0)+2));
    printf("%d\n",pMat[0][2]);

    return 0;
}


void swapByPointer(int *p1, int *p2)
{
    printf("swap -> %d %d\n", *p1, *p2);
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("swap -> %d %d\n", *p1, *p2);
}

void swap(int a, int b)
{
    printf("swap -> %d %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("swap -> %d %d\n", a, b);
}
