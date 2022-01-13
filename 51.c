#include <stdio.h>

int add(int num1, int num2);
int mutiply(int num1, int num2);
int subtract(int num1, int num2);
int divide(int num1, int num2);

int main()
{
    int x,y,choice,result;
    int (*op[4])( int, int);

    op[0] = add;
    op[1] = mutiply;
    op[2] = subtract;
    op[3] = divide; 

    printf("enter two numbers");
    scanf("%d %d",&x, &y);
    printf("enter 0 to add, 1 to mutiply, 2 to subtract, 3 to divide");
    scanf( "%d",&choice);
    printf("%d", result);

    return 0;




}

int add(int x, int y){
    return(x+y);
}
int mutiply(int x, int y){
    return(x*y);
}
int subtract(int x, int y){
    return(x-y);
}
int divide(int x, int y){
    if(y!=0)
    return(x/y);
    else
    {
        return 0;
    }
    
}