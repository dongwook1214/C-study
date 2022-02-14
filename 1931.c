#include<stdio.h>

int main(){
    int a[100000]={0},b[100000]={0};
    int num,i,j,temp,f,gap;
    int score = 1;

    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    gap = num/2;

    while (gap>0)
    {
        for(i = gap; i < num; i++){
            j = i-gap;
            while(j>=0){
                if(a[j]>a[j+gap]){
                    temp = b[j];
                    b[j]=b[j+gap];
                    b[j+gap] = temp;
                    temp = a[j];
                    a[j]=a[j+gap];
                    a[j+gap] = temp;
                    j-=gap;

                }else{
                    j=-1;
                }
            }
        }
        gap/=2;
    }

    gap = num/2;

    while (gap>0)
    {
        for(i = gap; i < num; i++){
            j = i-gap;
            while(j>=0){
                if(b[j]>b[j+gap]){
                    temp = b[j];
                    b[j]=b[j+gap];
                    b[j+gap] = temp;
                    temp = a[j];
                    a[j]=a[j+gap];
                    a[j+gap] = temp;
                    j-=gap;

                }else{
                    j=-1;
                }
            }
        }
        gap/=2;
    }
    

    f = b[0];
    for(i = 1; i < num; i++){
        if(a[i]>=f){
            score++;
            f = b[i];
        }
    }
    printf("%d",score);

}