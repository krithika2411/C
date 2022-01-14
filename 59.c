#include <stdio.h>
typedef struct{
  int h;
  int w;
  int l;

}box;

int main(){
    box boxes[3]= {{2,3,4,}, {4,5,6}};

    int k, volume;
    for(k= 0; k<3; k++){
       volume = boxes[k].h*boxes[k].w*boxes[k].l;
       printf("box %d volume %d\n", k, volume);
    }

    return 0;
}