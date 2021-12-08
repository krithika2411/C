// passing array
#include <stdio.h>  
void getarray(int arr[])  
{  
    printf("Elements of array are : ");  
    for(int i=0;i<3;i++)  
    {  
        printf("%d ", arr[i]);  
    }  
}  
int main()  
{  
   int arr[3]={45,67,34};  
   getarray(arr);  
   return 0;  
}  