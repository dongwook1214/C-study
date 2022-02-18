#include<stdio.h>

int main(){
    int num,i,j,gap,t,score = 0;
    int weights[100000] = {0};

    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d",&weights[i]);
    }
    gap = num/2;

    while(gap != 0){
        for(i = gap; i < num; i++){
            j = i - gap;
            while(j >= 0){
                if(weights[j]>weights[j+gap]){
                    t = weights[j];
                    weights[j] = weights[j + gap];
                    weights[j + gap] = t;
                    j-=gap;
                }else{
                    j = -1;
                }
            }
        }
        gap /= 2;
    }

    for(i = 0; i<num; i++){
        if(score < weights[i]*(num-i)){
            score = weights[i]*(num-i);
        }
    }

    printf("%d",score);
}