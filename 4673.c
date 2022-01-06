#include<stdio.h>

int main(){
	int i,j;
	
	for (i = 1; i <= 10000; i++){
		if(distinguish(i) == 0){
			printf("%d\n",i);
		}
	}
}

int distinguish(int num){
	
	int score = 0;
	int num2 = num;
	int a;
	
	while(num2 > 1){
		num2--;
		int num3 = num2;
		int sum = num2;
		while(num3 > 0){
			sum += (num3 % 10);
			num3 /= 10;
		}
		if(sum == num){
			score++;
		}
	}
	if(score > 0){
		return 1;
	}else{
		return 0;
	}
}
