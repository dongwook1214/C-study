#include<stdio.h>
int tile[1000001]={0,1,5,11,0,};
int last=3;

void dp(a){
    int score=0,i=1;
    while(a-i!=0){
        if(i==1){
            score+=tile[a-i];
        }else if(i==2){
            score+=4*tile[a-i];
        }else if(i%2 == 0){
            score+=3*tile[a-i];
        }
        else{
            score+=2*tile[a-i];
        }
        i++;
    }
    if(a%2==0){
        score+=3;
    }else{
        score+=2;
    }
    tile[a]=score;
}

int main(){
    int num,i,a;

    scanf("%d",&num);
    for(i = 1; i <= num; i++){
        scanf("%d",&a);
        if(a<last){
            printf("%d\n",tile[a]);
        }else{
            while(last<=a){
                dp(last);
                last++;
            }

            printf("%d\n",tile[a]);
        }
    }
}