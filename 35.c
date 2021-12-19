#include <stdio.h>
int main(){
    int num = 50;
    int *p = &num;
    int **p1= &p;
    printf("variable of num : %x\n",&num);
    printf("variable of p : %x\n",p);
    printf("value of *p : %d\n",*p);
    printf("variable of p1 : %x\n",p1);
    printf("vaue of **p1 : %x\n",*p);

    return 0;
}