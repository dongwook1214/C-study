#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	printf("%d",hansu(num));
	
	return 0;
}

int hansu(int num){
	int i;
	int score = 0;
	for (i = 0; i < num; i++){
		if(distinguishHansu(i+1)==1){
			score ++;
		}
	}
	return score;
}


int distinguishHansu(int num){
	int num2 = num;
	int a[4] = {0};
	int i = 0;
	while(num2 > 0){
		a[i] = num2%10;
		num2 /= 10;
		i++;
	}
	if(i==1||i==2){
		return 1;
	}
	if(i==3 && (a[0]-a[1])==(a[1]-a[2])){
		return 1;
	}
	return 0;
}
