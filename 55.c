#include <stdio.h>
#include <string.h>

struct course
{
    int id;
    char title[100];
    float hours;
};

int main(){
    struct course cs1 = {342, "intro to c ", 12.5};
    struct course cs2;

    cs2.id= 34;
    strcpy(cs2.title, "advance c");
    cs2.hours= 14.2;

    printf("%d, %s, %f\n ", cs1.id, cs1.title, cs1.hours);
    printf("%d, %s, %f ", cs2.id, cs2.title, cs2.hours);

    return 0;
}
