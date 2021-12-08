#include <stdio.h>
int main(){
    int x= 5;
    int y= 5;
    int *p = NULL;
    p= &x;
 y = *p +3;
 y += *p;
 *p = y;
 (*p)++;
 printf("p is pointing to %d\n", *p);
 return 0;
}