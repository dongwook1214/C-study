#include<stdio.h>

int main(){
    int arr[500][500];
    int dp[500][500];
    int num, i,j,max;
    scanf("%d",&num);
    for(i = 0; i< num; i++){
        for(j = 0; j < i+1; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    dp[0][0] = arr[0][0];
    for(i = 1; i < num; i++){
        for(j = 0; j <= i; j++){
            if(j==0){
                dp[i][j] = arr[i][j] + dp[i-1][j];
            }else if(j == i){
                dp[i][j] = arr[i][j] + dp[i-1][j-1];
            }else{
                if(dp[i-1][j]>dp[i-1][j-1]){
                    dp[i][j] = arr[i][j] + dp[i-1][j];
                }else{
                    dp[i][j] = arr[i][j] + dp[i-1][j-1];
                }
            }
        }
    }
    max = dp[num-1][0];
    for(i = 1; i < num; i++){
        if(max < dp[num-1][i]){
            max = dp[num-1][i];
        }
    }
    printf("%d",max);
}