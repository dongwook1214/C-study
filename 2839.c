#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	
	printf("%d",minNum(num));
}

int minNum(num){
	int i = 0;
	int j;
	while(i*5 <= num){
		i++;
	}
	
	if(i*5 == num){
		return i;
	}
	
	if(i*5 != num){
		i--;
	}
	
	for(; i >= 0; i--){
		j = 0;
		while(i*5 + j*3 < num){
			j++;
		}
		if(i*5 + j*3 == num){
			return i+j;
		}
	}
	return -1;
}
