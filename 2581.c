#include<stdio.h>

int main(){
	int num[2]={0};
	int min;
	int score = 0;
	int numbers[3000] = {0};
	int i = 0;
	
	
	scanf("%d %d",&num[0],&num[1]);
	
	for(;num[1] >= num[0]; num[1]--){
		if(distinguishDecimal(num[1]) == 1){
			score += num[1];
			numbers[i] = num[1];
			i++;
		}
	}
	
	if(score == 0){
		printf("%d",-1);
	}else{
		printf("%d\n",score);
		printf("%d",numbers[i-1]);
	}
}

int distinguishDecimal(number){
	
	int number2 = number;
	int score = 0;
	
	if(number == 1){
		return 0;
	}
	
	for(; number2 >= 1; number2--){
		if(number % number2 == 0){
			score++;
		}
	}
	
	if(score == 2){
		return 1;
	}
	
	
	return 0;
}
