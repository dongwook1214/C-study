#include<stdio.h>

int main(){
    int arr[301]={0};
    int dp[301][2];
    int num,i,t =1,a;
    scanf("%d",&num);
    for(i = 1;i <= num; i++){
        scanf("%d",&arr[i]);
    }
    dp[1][0]=arr[1];
    dp[1][1]=arr[1];
    dp[2][0]=arr[2]+arr[1];
    dp[2][1]=arr[2];

    for(i = 3; i <= num; i++){
        dp[i][0] = arr[i] + dp[i-1][1];
        if(dp[i-2][0]>dp[i-2][1]){
            dp[i][1] = arr[i]+dp[i-2][0];
        }else{
            dp[i][1] = arr[i]+dp[i-2][1];
        }
    }
    if(dp[num][0]>dp[num][1]){
        a = dp[num][0];
    }else{
        a = dp[num][1];
    }
    printf("%d",a);
}