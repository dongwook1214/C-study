#include<stdio.h>

int main(){
    int x,y,w,h;
    int distance;
    scanf("%d %d %d %d",&x,&y,&w,&h);

    distance = x;
    if(y<distance){
        distance = y;
    }
    if(w-x<distance){
        distance = w-x;
    }
    if(h-y<distance){
        distance = h-y;
    }
    printf("%d",distance);

}