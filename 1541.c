#include<stdio.h>
#include<stdlib.h>

int main(){
    char sik[50];
    int i,j,score = 0;

    scanf("%s",sik);

    for(i = 0; i < 50; i++){
        j = i+1;
        if(sik[i] =='-'){
            for(; j < 50; j++){
                if(sik[j] =='+'){
                    sik[j] = '-';
                }
            }
            break;
        }
    }
    score+= atoi(sik);
    for(i = 1; i < 50; i++){
        if(sik[i]=='+'){
            for(j=0; j <= i; j++){
                sik[j]='0';
            }
            score += atoi(sik);
        }
        if(sik[i]=='-'){
            for(j=0; j <= i; j++){
                sik[j]='0';
            }
            score -= atoi(sik);
        }
    }

    printf("%d",score);
    
}