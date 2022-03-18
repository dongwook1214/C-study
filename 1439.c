#include<stdio.h>

int length(char* a){
    int i =0;
    while(a[++i]);
    return i;
}

int main(){
    char a[1000000];
    int i,score=1;
    scanf("%s",a);
    for(i = 1; i < length(a); i++){
        if(a[i-1]!=a[i]){
            score++;
        }
    }
    printf("%d",score/2);

}