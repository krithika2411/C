#include <stdio.h>
int main(){
    int a[5] = {22, 33 , 44, 55, 66};
    int *ptr = NULL;
    int i;
    ptr = a;
    for (int i = 0; i <5; i++)
    {
        printf("%d", *(ptr + i));
    
    }


    return 0;
}