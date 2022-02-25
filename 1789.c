#include<stdio.h>

int main(){
    int score = 0,j = 1;
    long long num;
    scanf("%lld",&num);

    while(num > 0){
        num -= j;
        if(num < j+1){
            num = 0;
        }
        j++;
        score ++;
    }

    printf("%d",score);
}

