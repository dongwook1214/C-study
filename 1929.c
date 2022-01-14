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

int distinguish2(int num,int* list,int d){
    int i;

    for(i = 0;i <= d; i++){
        if(list[i]>=num){
            break;
        }
        if(num % list[i] == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a,b,d,i,j;
    int list[1000];
    int c = 0;

    scanf("%d %d",&a,&b);

    for (i = 2; i <= 1000; i++){
        if(distinguish(i)==1){
            list[c] = i;
            c++;
        }
    }
    d = c - 1;

    if(a == 1){
        a++;
        for(; a <= b; a++){
            if(distinguish2(a,list,d)==1){
                printf("%d\n",a);
            }
        }
    }else{
        for(; a <= b; a++){
            if(distinguish2(a,list,d)==1){
                printf("%d\n",a);
            }
        }
    }
    
}