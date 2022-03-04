#include<stdio.h>

int main(){
    int num,i,number,j;
    int zero[41]={1,0,1,};
    int one[41]={0,1,1,};
    scanf("%d",&num);
    j = 3;
    for(i = 0; i <  num; i++){
        scanf("%d",&number);
        if(zero[number]==0&&one[number]==0){
            for(; j <= number; j++){
                zero[j] = zero[j-2]+zero[j-1];
                one[j] = one[j-2]+one[j-1];
            }
        }
        printf("%d %d\n",zero[number],one[number]);
    }
}