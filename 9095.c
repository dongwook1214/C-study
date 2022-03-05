#include<stdio.h>

int main(){
    int amount [12] = {0,1,2,4};
    int num,number,i,j;
    scanf("%d",&num);
    j = 4;
    for(i = 0; i < num; i++){
        scanf("%d",&number);
        if(amount[number]==0){
            for(; j <= number; j++){
                amount[j] = amount[j-1]+amount[j-2]+amount[j-3];
            }

        }
        printf("%d\n",amount[number]);
    }
}