#include <stdio.h>
int *getarray(int*a)
{
    printf("enter the element in an array ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    return a;
}
int main()
{
    int *n;
    int a[3];
    n =getarray(a);
    printf("\nElements of array are\n");
    for ( int i = 0; i < 3; i++)
    {
        printf("%d",n[i]);
    }
    return 0;
}