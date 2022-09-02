#include <stdio.h>
#include <math.h>
int main(){
int x; int y; int z; int sum;
float avg;
printf("enter 3 num:" );
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
sum= x+y+z;
avg= sum/3;
printf("%d\n", sum );
printf("%.2f\n", avg);
return 0;
}