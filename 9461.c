#include<stdio.h>
long long length[101]={0,1,1,1,0};

void dp(a){
    length[a] = length[a-3]+length[a-2];
}
int main(){

    int num,i,j,last = 3,a;

    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d",&a);
        if(a>last){
            for(last=last; last<=a; last++){
                dp(last);
            }
            last--;
        }
        printf("%lld\n",length[a]);
    }
}