#include<stdio.h>

int main(){
    int i,j;
    int num;
    int score;
    int arr[250001] = {1,1,0};

    for (i = 2; i<= 500; i++){
        j = i*i;
        if(arr[i] == 1){
            continue;
        }
        for (; j <= 250000; j++){
            if(j%i==0){
                arr[j] = 1;
            }
        }
    }

    while(1){
        score = 0;
        scanf("%d",&num);
        if(num==0){
            break;
        }
        i = 2*num;
        for(; num+1 <= i; num++){
            if(arr[num+1] == 0){
                score ++;
            }
        }
        printf("%d\n",score);
    }
}