#include <stdio.h>
 
int max(int a, int b){
    return a > b ? a : b;
}
 
int main(void){
 
    int N;
    int arr[10010] = {};
    int dp[10010] = {};
    scanf("%d", &N);
 
    for (int i = 1; i <= N; i++)
        scanf("%d", &arr[i]);
 
    dp[1] = arr[1];
    dp[2] = arr[1]+arr[2];

    for (int i = 3; i <= N; i++){
        dp[i] = max(arr[i] + dp[i - 2], dp[i - 1]);
        dp[i] = max(dp[i], arr[i] + arr[i - 1] + dp[i - 3]);
    }
    
    printf("%d\n", dp[N]);
}
