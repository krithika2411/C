#include <stdio.h>
int main(){
    int a[2][3] = { 
        {3,4,5},{20,25,24}
    };
    printf("element %d\n", a[1][2]);
    a[1][2] =34;
    printf("element %d\n",a[1][2]);
    return 0;
}