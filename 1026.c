#include<stdio.h>

int main(){
    int a[50] = {0},b[50] = {0};
    int num,i,j,k,score = 0,gap;


    scanf("%d",&num);

    for(i = 0; i < num; i++){
        scanf("%d",&a[i]);
    }
    for(i = 0; i < num; i++){
        scanf("%d",&b[i]);
    }

    gap = num/2;

    while(gap!=0){
        for(i = gap; i < num; i++){
            j = i - gap;
            while(j >= 0){
                if(a[j]>a[j+gap]){
                    k = a[j];
                    a[j] = a[j+gap];
                    a[j+gap] = k;
                    j -= gap; 
                }else{
                    j = -1;
                }
            }
        }
        gap /= 2;
    }

    gap = num/2;

    while(gap!=0){
        for(i = gap; i < num; i++){
            j = i - gap;
            while(j >= 0){
                if(b[j]<b[j+gap]){
                    k = b[j];
                    b[j] = b[j+gap];
                    b[j+gap] = k;
                    j -= gap;
                }else{
                    j = -1;
                }
            }
        }
        gap /= 2;
    }


    for(i = 0; i < num; i++){
        score += a[i] * b[i];
    }

    printf("%d",score);
}