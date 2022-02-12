#include<stdio.h>

int main(){
    int numbers[1000];
    int num,i,j,a;

    scanf("%d",&num);

    for(i = 0; i < num; i++){
        scanf("%d",&numbers[i]);
    }

    for (i = 0; i < num - 1; i++){
        for(j = 0; (j+i) < num-1; j++){
            if(numbers[j]>numbers[j+1]){
                a = numbers[j+1];
                numbers[j+1] = numbers[j];
                numbers[j] = a;
            }
        }
    }

    for(i = 0; i < num; i++){
        printf("%d",numbers[i]);
    }
}