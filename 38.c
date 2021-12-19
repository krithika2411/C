#include <stdio.h>
void swap(int* num1, int * num2);
int main(){
  int x = 10;
  int y = 20;

  printf("x is %d, y is %d\n", x, y);
  swap(&x, &y);
  printf("x is %d, y is %d", x, y);
    return 0;
}

void swap (int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
