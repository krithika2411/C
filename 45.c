#include <stdio.h>
#include <string.h>
int main (){
    char ch[10]= {'g','g','g','g','g','g','\0'};
    char ch2[20];
    strcpy(ch2,ch);
    printf("value of second string: %s\n",ch2);
    return 0;
}