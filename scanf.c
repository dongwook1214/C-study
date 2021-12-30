#include<stdio.h>

int main(){
	int a;
	//&a a의 주소에 값을 넣는거임
	scanf("%d",&a);
	printf("%d\n",a);

	char b[20];
	//b,&b == &b[0]
	scanf("%s",b);
	printf("%s\n",b);

	//scanf("%s",b);의 치명적인 단점: 공백을 받지 못 한다.
	//fgets(): string 값을 받을 수 있다 공백도 받을 수 있음 gets_s도 있음
	//원래 gets 라는 결함이 있음
	char c[20];
	fgets(c,20,stdin);
	printf("%s",c);
}
