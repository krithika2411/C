// swapings
#include <stdio.h>
int main()
{
    int a = 10, b = 20,*p1 = &a,*p2 = &b;
    printf("before swaping: *p1= %d* p2= %d\n", *p1, *p2);
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    printf("after swaping: *p1=%d* p2= %d\n", *p1, *p2);
    return 0;
}