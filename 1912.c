#include<stdio.h>
int dp[100000];
int arr[100000];

int main(){
    int num,i,score,j,max;
    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }
    dp[0] = arr[0];
    for(i = 1; i < num; i++){
        if(dp[i-1]+arr[i]>arr[i]){
            dp[i] = dp[i-1]+arr[i];
        }else{
            dp[i] = arr[i];
        }
    }
    max = dp[0];
    for(i = 1; i < num; i++){
        if(max<dp[i]){
            max = dp[i];
        }
    }
    printf("%d",max);
}