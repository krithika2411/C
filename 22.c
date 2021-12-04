#include <stdio.h>
int sum (int x, int y);
int main()
{
 int x, y, result;
 x= 3;
 y=12;
 result = sum(x, y);
 printf("%d +%d=%d", x,y, result);
 return 0;

}
int sum (int x, int y){
    y+=x;
    return y;
}