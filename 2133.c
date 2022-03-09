#include<stdio.h>

int main(){
    int dp[31] = {0,0,3,0,11,};
    int num,i,j;
    scanf("%d",&num);

    if(num > 4 && num%2 ==0){
        for(i = 6; i <= num; i+= 2){
            j = i-4;
            dp[i] = 3*dp[i-2]+2;
            while(j > 0){
                dp[i] += 2 * dp[j];
                j -= 2;
            }
        }
    }

    printf("%d",dp[num]);
}