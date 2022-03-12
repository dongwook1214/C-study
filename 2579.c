#include<stdio.h>

int main(){
    int dp[300];
    int num,i,t,score;
    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d",&dp[i]);
    }
    t = 1;
    score = dp[num -1];
    i = num-1;
    while(i >= 2){
        if(i == 3){
            score = score + dp[0]+dp[1];
            break;
        }
        if(t<=1){
            if(dp[i-1]>dp[i-2]){
            score += dp[i-1];
            t += 1;
            i--;
            }else{
                score += dp[i-2];
                t = 0;;
                i -= 2;
            }
        }else{
            score += dp[i-2];
            t = 0;;
            i -= 2;
        }
    }
    
    printf("%d",score);
    
}