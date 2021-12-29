#include <stdio.h>

int swap(int* c,int* d){
    int temp = *c;
    *c=*d;
    *d=temp;
    return 0;
    
}

int main(){

    int a = 5;
    //aesterisk 용도
    //포인터를 선언할때,해당 주소의 값에 접근하는 용도
    int* aptr = &a;

    int b = 7;
    int* bptr = &b;

    char c[] = "dongwook";

    int d[4] = {0,1,2,3};

    printf("address of a is %x\n",aptr);
    printf("value of ptr is %d\n", *aptr);

    swap(aptr,bptr);

    printf("a is %d b is %d\n",a,b);
    
    printf("%x\n",&c);
    //char의 크기는 1byte라서 1 이동하면 다음 문자의 주소
    printf("%c\n",*(&c[0]+1));
    //int의 크기는 4byte라서 4 이동하면 다음 정수의 주소
    printf("%x\n%x\n%x\n%x\n",&d[0],&d[1],&d[2],&d[3]);

}
