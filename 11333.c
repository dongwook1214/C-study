#include<stdio.h>

long long dp[10001]={0,0,0,3,};

void solve(int j){
    long long score = j/3*2;
    int i=6;
    score += dp[j-3]*3;
    while(j-i != 0){
        score += dp[j-i]*(i/3*2);
        i += 3;
    }
    dp[j] = score%1000000007;
}
int main(){
    int num,i,j=4,number,max=3;
    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d",&number);
        
        if(max < number){
            max = number;
            for(; j <= number; j++){
                if(j%3==0){
                    solve(j);
                }
            }
            j = max;
        }
        printf("%lld\n",dp[number]);
    }
    return 0;
}