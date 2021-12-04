#include <stdio.h>
int main ()
{
    int num =2;
    switch (num){
        case 1:
        case 2:
        case 3:
        printf("1,2, or 3\n");
        break;
        case 4:
        case 5:
        case 6:
        printf("6, 7 , 9\n");
        break;
        default:
        printf("nothing\n");
    }
}