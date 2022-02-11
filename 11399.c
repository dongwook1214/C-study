#include<stdio.h>

int main(){
    int num,num2;
    int i,j,f;
    int time[1000]={0};
    int sum = 0;

    scanf("%d",&num);

    for(i = 0; i < num; i++){
        j=0;
        scanf("%d",&num2);
        while(1){
            if(time[j]==0){
                time[j]=num2;
                break;
            }
            if(time[j]<num2){
                j++;
                continue;
            }
            if(time[j]>=num2){
                f = num-1;
                while(f >= j){
                    time[f+1]=time[f];
                    f--;
                }
                time[j]=num2;
                break;
            }
            
            j++;
        }
    }

    for(i = 0; i < num; i++){
        sum+=time[i]*(num-i);
    }

    printf("%d",sum);
}