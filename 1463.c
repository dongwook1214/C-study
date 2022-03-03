#include<stdio.h>

int main(){
    int num,i,a;
    int numbers[1000001]={0,0,1,1,};
    scanf("%d",&num);

    for(i = 4; i <= num; i++){
        a = numbers[i-1]+1;
        if(i%2==0){
            if(numbers[i/2]+1 < a){
                a = numbers[i/2]+1;
            }
        }
        if(i%3==0){
            if(numbers[i/3]+1 < a){
                a = numbers[i/3]+1;
            }
        }
        numbers[i] = a;
    }
    printf("%d",numbers[num]);
    
}