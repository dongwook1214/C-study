#include<stdio.h>

int goldbah(int num, int* demical,int n){
    int a,b,i,j;
    for(i = 0; i < n; i++){
        if(2 * demical[i]>num){
            break;
        }
        for(j = i; j < n; j++){
            if(demical[i]+demical[j]==num){
                a=demical[i];
                b=demical[j];
            }

        }
    }
    printf("%d %d\n",a,b);
    return 0;
}

int main(){
    int i,t,num,j;
    int arr[10001]={1,1,0};
    int demical[5000] = {0};
    int n = 0;

    for(i = 2; i<= 100; i++){
        j = i*i;
        if(arr[i] == 1){
           continue; 
        }
        for(; j <= 10000; j++){
            if(j%i==0){
                arr[j]=1;
            }
        }
    }

    for(i = 2; i <= 10000; i++){
        if(arr[i]==0){
            demical[n] = i;
            n++;
        }
    }

    
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        scanf("%d",&num);
        goldbah(num,demical,n);
    }
}