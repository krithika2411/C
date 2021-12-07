#include <stdio.h>    
void main ()    
{    
    int arr[2][2],i,j;     
    for (i=0;i<2;i++)    
    {    
        for (j=0;j<2;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("\n printing the elements \n");     
    for(i=0;i<2;i++)    
    {    
        printf("\n");    
        for (j=0;j<;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
}    