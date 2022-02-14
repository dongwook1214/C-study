#include<stdio.h>

int main(){
    int a[100000]={0},b[100000]={0};
    int num,i,j,t,f;
    int score = 1;

    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d %d",&a[i],&b[i]);
    }

    for(i = 0; i < num -1; i++){
        for(j = 0; (i + j) < num - 1; j++){
            if(b[j]>b[j+1]){
                t = b[j];
                b[j] = b[j+1];
                b[j+1] = t;
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
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