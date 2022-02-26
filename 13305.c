#include<stdio.h>

int main(){
    int num,i,j = 0;
    long long score = 0;
    int long long distance[100000]={0,};
    int long long cost[100000] = {0, };
    
    scanf("%d",&num);
    for(i = 0; i < num-1; i++){
        scanf("%lld",&distance[i]);
    }
    for(i = 0; i < num; i++){
        scanf("%lld",&cost[i]);
    }
    for(i = 0; i < num - 1; i=j){
        for(j = i; j < num - 1; j++){
            if(cost[j] >= cost[i]){
                score+=cost[i]*distance[j];
            }else{
                break;
            }
        }
    }

    printf("%lld",score);
}