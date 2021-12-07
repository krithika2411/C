#include <stdio.h>
int main(){
    float purchases[3]= {10.99, 14.25, 90.50};
   float total = 0;
   int i;
   for ( i = 0; i < 3; i++)
   {
       total += purchases[i];
   }
    printf("purchases total is %3.3f\n", total);
    return 0;
}