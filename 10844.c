#include<stdio.h>

int main(){
    int dp[101][10]={0,};
    int i,num,j = 0;
    long long score =0;

    scanf("%d",&num);
    for(i = 0; i <= 9; i++){
        dp[1][i] = 1;
    }

    for(i = 2; i <= num; i++){
        for(j = 0; j <= 9; j++){
            if(j==0){
                dp[i][j] = dp[i-1][1]%1000000000;
            }else if(j==9){
                dp[i][j] = dp[i-1][8]%1000000000;
            }else{
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j+1])%1000000000;
            }
        }
    }

    for(i =1; i <= 9; i++){
        score += dp[num][i];
    }
    printf("%lld",score% 1000000000);
}