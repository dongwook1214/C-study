#include<stdio.h>

int main(){
    int num, i,k,j,f,c,score = 1;
    int a[100000];
    int b[100000];

    scanf("%d",&num);

    scanf("%d %d",&a[0],&b[0]);
    c = a[0];//a 최대
    k = b[0];//b 최소
    f = b[0];//b 최대
    for(i = 1; i < num; i++){
        scanf("%d %d",&a[i],&b[i]);
        if(b[i]<k){
            k = b[i];
        }
        if(b[i]>f){
            f = b[i];
        }
        if(c<a[i]){
            c = a[i];
        }
    }

    while(1){
        j = f;
        for(i = 0; i < num; i++){
            if(a[i]<k){
                continue; 
            }
            if(j>=b[i]){
                j=b[i];
            }
        }
        score++;
        k = j;
        if(k > c){
            break;
        }
        
    }
    printf("%d",score);

}