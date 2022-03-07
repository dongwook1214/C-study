#include<stdio.h>

int main(){
    int dp[1001] = {0,1,3,};
    int num,i;
    scanf("%d",&num);

    for(i = 3; i <= num; i++){
        dp[i] = (2*dp[i-2]+dp[i-1])%10007;
    }
    printf("%d",dp[num]);
}