#include <stdio.h>
int main (){
    int i, j;
    int max= 12;
    int table = 10;

    for ( i = 0; i <= table; i++)
    {
        for ( j = 0; j <=max; j++){
        printf("%d* %d =%d\n",i,j, i*j);
    }
    printf("\n");
    }
    
    

 return 0;
}