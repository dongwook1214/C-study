#include<stdio.h>

int main(){
    int numbers[1000];
    int num,i,j,a;

    scanf("%d",&num);

    for(i = 0; i < num; i++){
        scanf("%d",&numbers[i]);
    }

    for(i = 0; i < num-1; i++){
        for(j = i+1; j < num; j++){
            if(numbers[j]<numbers[i]){
                a = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = a;
            }
        }
    }

    for(i = 0; i < num; i++){
        printf("%d ",numbers[i]);
    }
}