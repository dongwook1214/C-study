#include <stdio.h>

int soinsu(number){
    int number2 = number-1;
    
    for(; number2 > 0; number2--){
        if(number%number2==0){
            if(number/number2==number){
                printf("%d\n",number);
                return 0;
                }
            return number2;
        }
    }
}

int main(){
    int num;
    scanf("%d",&num);

    if(num==1){
        return 0;
    }

    int num2 = num;

    while(1){
        if(soinsu(num2)==0){
            break;
        }
        printf("%d\n",num2/soinsu(num2));
        num2 = soinsu(num2);

    }
    return 0;
}