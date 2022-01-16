#include <stdio.h>
#include <stdlib.h>
int main(){
    int*ptr = malloc(10* sizeof(*ptr));
    if(ptr !=NULL)
    *(ptr+ 2)=40;
    printf("%d", *(ptr+2));

    free(ptr);
}