#include<stdio.h>

int main(){
    int numbers[10001] = {0,1,0};
    int i,j;
    for(i = 2; i*i <= 10000; i++){
        if(numbers[i]==1){
            continue;
        }
        for(j=2; i*j<=10000;j++){
            numbers[i*j]=1;
        }
    }
    for(i = 1; i<=10000; i++){
        if(numbers[i]==0){
            printf("%d \n",i);
        }
    }
}