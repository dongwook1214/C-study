#include<stdio.h>

int number(x1,y1,r1,x2,y2,r2){
    int r = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    if(r==0&&r1==r2){
        return -1;
    }
    if(r==(r1+r2)*(r1+r2)||r==(r1-r2)*(r1-r2)){
        return 1;
    }
    if((r>(r1+r2)*(r1+r2))||r<(r1-r2)*(r1-r2)){
        return 0;
    }
    return 2;
}

int main(){
    int num,i;
    int x1,y1,r1,x2,y2,r2;

    scanf("%d",&num);

    for(i = 0; i < num; i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        printf("%d\n",number(x1,y1,r1,x2,y2,r2));
    }
}