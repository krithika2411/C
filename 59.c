#include <stdio.h>
#include <conio.h>
int main(){
    int a, b, small;
    printf("enter any two number : ");
    scanf("%d %d", &a, &b);
    if (a<b)
    small= a;
    else if (a>b)
    small = b;
   printf("smallest of the two number = %d", small);
   getch();
   
    

    return 0;
}