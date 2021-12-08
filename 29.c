#include <stdio.h>
int main(){
    int num = 50;
    int*p;
    p=&num;
    printf("%x\n",p); //address
    printf("%d\n",*p);//value
    return 0;
}