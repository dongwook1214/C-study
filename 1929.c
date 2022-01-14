#include<stdio.h>

int distinguish(num){
    int i;
    for(i = 2; i <= num-1; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a==1){
        a++;
        for(; a <= b; a++){
            if(distinguish(a)==1){
                printf("%d\n",a);
            }
        }
    }else{
        for(; a <= b; a++){
            if(distinguish(a)==1){
                printf("%d\n",a);
        
            }
        }
    }
}