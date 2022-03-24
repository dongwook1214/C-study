#include<stdio.h>
long long dp[91] = {0,1,1,2,3,0};
void dpa(i){
    dp[i] = dp[i-2]+dp[i-1];
}
int main(){
    int num,last = 4,i;
    
    scanf("%d",&num);
    if(num>last){
        for(i = last + 1; i <= num; i++){
            dpa(i);
        }
    }
    printf("%lld",dp[num]);
}