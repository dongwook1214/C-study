#include<stdio.h>

int main(){
    int money,i,score = 0;
    int coin[6] = {500,100,50,10,5,1};
    scanf("%d",&money);

    money = 1000-money;

    for(i = 0; money>0; i++){
        while(money >= coin[i]){
            money -= coin[i];
            score++;
        }
    }
    printf("%d",score);
}