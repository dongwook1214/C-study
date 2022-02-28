#include<stdio.h>

int main(){
    int num,num2,i,j,gap,p,t,score;
    int a[100000],b[100000];
    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d",&num2);
        score = num2;
        for(j = 0; j < num2; j++){
            scanf("%d %d",&a[j],&b[j]);
        }
        gap = num2/2;
        while(gap >0){
            for(j = gap; j < num2; j++){
                p = j - gap;
                while(p >= 0){
                    if(a[p]>a[p+gap]){
                        t = a[p];
                        a[p] = a[p + gap];
                        a[p+gap] = t;
                        t = b[p];
                        b[p] = b[p + gap];
                        b[p+gap] = t;
                        p -= gap;
                    }else{
                        p = -1;
                    }
                }
            }
            gap /= 2;
        }

        for(j = num2 -1; j >= 0; j--){
            for(p = 0; p < j; p++){
                if(b[j]>b[p]){
                    score--;
                    break;
                }
            }
        }
        printf("%d\n",score);
    }
}