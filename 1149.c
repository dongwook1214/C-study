#include<stdio.h>
int color[1000][3];

void dp(int i){
    int min;
    min = color[i-1][1];
    if(min > color[i-1][2]){
        min = color[i-1][2];
    }
    color[i][0] += min; 
    min = color[i-1][0];
    if(min > color[i-1][2]){
        min = color[i-1][2];
    }
    color[i][1] += min;
    min = color[i-1][0];
    if(min > color[i-1][1]){
        min = color[i-1][1];
    }
    color[i][2] += min;
}

int main(){
    
    int num,i,min;

    scanf("%d",&num);
    for(i = 0; i < num; i++){
        scanf("%d %d %d",&color[i][0],&color[i][1],&color[i][2]);
    }

    for(i = 1; i < num; i++){
        dp(i);
    }
    min = color[num-1][0];
    if(color[num-1][1]<min){
        min = color[num-1][1];
    }
    if(min>color[num-1][2]){
        min = color[num-1][2];
    }
    printf("%d",min);
    
}