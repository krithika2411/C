#include<stdio.h>  
void main()   
{   
   char str[2];   
   printf("Enter the string? ");  
   fgets(str, 2, stdin);   
   printf("%s", str);   
}