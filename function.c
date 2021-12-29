#include <stdio.h>

//(리턴 타입)(함수의 이름)(인자 variable)
int star (int type){
    if(type == 1){
        printf("************\n");
        return 11;
    }else if(type == 2){
        printf("@@@@@@@@@@@@\n");
        return 22;
    }else{
        printf("error\n");
        return 33;
    }
}

int add(int a,int b){
    //지역변수
    int sum;
    sum = a+b;
    return sum;
}

int main(){
    printf("hello\n");
    int msg = star(1);

    printf("%d\n",msg);

    printf("%d",add(1,2));
}
