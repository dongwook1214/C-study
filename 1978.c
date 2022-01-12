#include<stdio.h>

int main(){
	int num;
	int number;
	int i;
	int score = 0;
	
	scanf("%d",&num);
	for(i = 0; i < num; i++){
		scanf("%d",&number);
		if(distinguishDecimal(number)==1){
			score++;
		}
	}
	printf("%d",score);
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
