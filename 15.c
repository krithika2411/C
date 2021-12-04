#include <stdio.h>
int main(){
    int score = 50;
    if (score> 60)
    {
        printf("%d failed",score);
    }
    else if (score> 80)
    {
        printf ("%d average",score);
    }
    else
    {
        printf("%d passed", score);
    }
    return 0;
}