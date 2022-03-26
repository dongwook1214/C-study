#include<stdio.h>

int max(a,b){
    return a>b?a:b;
}

int T[16] = {0,};
int P[16] = {0,};
int dp[21] = {0,};

int main(){
    int num,i,most,j;
    scanf("%d",&num);
    for(i = 1; i <= num; i++){
        scanf("%d %d",&T[i],&P[i]);
        if(i+T[i]-1>num){
            T[i] = 0,P[i] = 0;
        }
    }
    for(i = 1; i<= num; i++){
        most = 0;
        for(j = 1; j <= i; j++){
            most = max(most,dp[j]);
        }
        dp[i+T[i]] = max(most+P[i],dp[i+T[i]]);
    }
    most = 0;
    for(i = 1; i<= 21; i++){
        most = max(most,dp[i]);
    }
    printf("%d",most);
}