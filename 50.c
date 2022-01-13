#include <stdio.h>
void say_hello(int num_times);

int main(){
    void (*funptr)(int);
    funptr = say_hello;
    funptr(3);

    return 0;
}

void say_hello(int num_times){
    int i;
    for(i= 0; i < num_times; i++){
        printf("Hello");
    }
}