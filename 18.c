#include <stdio.h>

int main() {
    int count = 1;
    int i = 3;
    while (count <8) {
        printf("count = %d\n", count);
        count+= i; 
    }
    return 0;
}