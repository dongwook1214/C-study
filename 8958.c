#include <stdio.h>

int main(){
	
	int num;
	int i;
	int j;
	int score;
	int scorepoint;
	char ox[1000][80];
	
	scanf("%d",&num);
	
	for (i = 0; i < num; i++){
		scanf("%s",ox[i]);
	}	
	
	for (i = 0; i < num; i++){
		
		score = 0;
		scorepoint = 1;
		
		if(ox[i][0] == 'O'){
			score += scorepoint;
		}
		
		for (j = 1; j < 80; j++){
			
			if(ox[i][j - 1] == 'O'){
				scorepoint ++;
			}else{
				scorepoint = 1;
			}
			
			if(ox[i][j] == 'O'){
				score += scorepoint;
			}
		}
		
		printf("%d\n",score);
	}
	
}
