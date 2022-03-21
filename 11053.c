#include<stdio.h>

int main(){
    int arr[1000]={0};
    int dp[1000]={0};
    int num,i,j,max;

    scanf("%d",&num);
    for(i = 0 ; i < num; i++){
        scanf("%d",&arr[i]);
    }
    dp[0] = 1;
    for(i = 1; i < num; i++){
        max = 0;
        for(j = 0; j < i; j++){
            if(arr[i]>arr[j]){
                if(max<dp[j]){
                    max = dp[j];
                }
            }
            dp[i] = max +1;
        }
        
    }
    max = 0;
    for(i = 0; i < num;i++){
        if(max<dp[i]){
            max = dp[i];
        }
    }
    printf("%d",max);
}