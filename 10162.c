#include<stdio.h>

int main(){
    int time[3] = {300,60,10};
    int num,i;
    int score[3]={0};

    scanf("%d",&num);

    for(i = 0; i < 3; i++){
        while(num>=time[i]){
            num -= time[i];
            score[i]++;
        }
    }

    if(num==0){
        for(i = 0; i < 3; i++){
            printf("%d ",score[i]);
    }
    }else{
        printf("%d",-1);
    }
}