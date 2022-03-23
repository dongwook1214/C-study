#include<stdio.h>
int c(a,b){
    int dp[30]={0,};
    int last[30] = {0,};
    int i,j,k=0;
    long long score = 1;
    if(b/2 < a){
        a = b - a;
    }

    for(i = 0; i < a; i++){
        dp[i] = b - i;
    }
    for(i = 1; i <= a; i++){
        for(j = 0; j < a; j++){
            if(dp[j]%i==0){
                dp[j] /= i;
                break;
            }
            if(j==a-1){
                last[k]=i;
                k++;
            }
        }
    }
    for(i = 0; i < a; i++){
        score *= dp[i];
    }
    for(i = 0; i < k; i++){
        score /= last[i];
    }
    return score;
}

int main(){
    int num,a,b,i;
    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",c(a,b));
    }
}