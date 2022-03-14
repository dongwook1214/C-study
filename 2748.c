#include<stdio.h>

int main(){
    long long dp[91]={0,1,};
    int num,i;
    scanf("%d",&num);
    for(i = 2; i <= num; i++){
        dp[i] = dp[i-2]+dp[i-1];
    }
    printf("%lld",dp[num]);
}