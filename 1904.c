#include<stdio.h>

int main(){
    int dp[1000001]={0,1,2};
    int num,i;
    scanf("%d",&num);
    for(i = 3; i <= num; i++){
        dp[i] = (dp[i-2]+dp[i-1])%15746;
    }
    printf("%d",dp[num]);

}