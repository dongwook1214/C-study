#include<stdio.h>

int main(){
    int num,i;
    int amount[1001] = {0,1,2,};
    scanf("%d",&num);
    for(i = 3; i <= num; i++){
        amount[i] = (amount[i-1]+amount[i-2])%10007;
    }
    printf("%d",amount[num]);
}