#include<stdio.h>

int main(){
    int num,i,score,j,max;
    scanf("%d",&num);
    int dp[100000]={0,};
    int arr[100000];
    for(i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < num; i++){
        score = 0;
        for(j = i; j < num; j++){
            if(arr[i] < 0){
                dp[i] = arr[i];
                break;
            }
            if(score+arr[i]>0){
                score += arr[j];
                if(score>dp[i]){
                    dp[i] = score;
                }
            }else{
                break;
            }
        }
    }
    max = dp[0];
    for(i = 1; i < num; i++){
        if(max < dp[i]){
            max = dp[i];
        }
    }
    printf("%d",max);
}