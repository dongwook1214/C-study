#include<stdio.h>

int main(){
    int num,price,i,j;
    int score = 0;
    int numbers[10]={0};

    scanf("%d",&num);
    scanf("%d",&price);

    for(i = 0; i < num; i++){
        scanf("%d",&numbers[i]);
    }
    j = num - 1;
    while(price!=0){
        while(price<numbers[j]){
            j--;
        }
        while(price>=numbers[j]){
            price -= numbers[j];
            score++;
        }
    }
    printf("%d",score);
}