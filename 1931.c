#include<stdio.h>

int main(){
    int a[100000]={0},b[100000]={0};
    int num,i,j,t,f,gap;
    int score = 1;

    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    gap = num/2;

    for(i = 0; i < num -1; i++){
        for(j = i+1; j < num ; j++){
            if(b[i]>b[j]){
                t = b[i];
                b[i] = b[j];
                b[j] = t;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    f = b[0];
    for(i = 1; i < num; i++){
        if(a[i]>=f){
            score++;
            f = b[i];
        }
    }
    printf("%d",score);

}