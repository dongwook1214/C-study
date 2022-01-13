#include <stdio.h>
int main(){

	//Array 같은 데이터 타입을 가진 변수들을 하나의 변수만으로 저장
	//int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int a[10];
	int i;

	//모두 0으로 초기화
	int b[10] = {0};

	//String c,d,e 모두 같음
	char c[9] = {'d','o','n','g','w','o','o','k','\0'};

	char d[9] = "dongwook";

	char e[] = "dongwook";

	//int 하나의 크기는 4byte 따라서 a[10]의 크기는 40byte
	printf("%d",sizeof(a));

	for (i=0; i<10; i++){
		a[i] = i+1;
	}

	for (i=0; i<10; i++){
		printf("%d",a[i]);
	}
	printf("%s",d);
	 
}
