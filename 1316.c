#include<stdio.h>

int main(){
	int num;
	char word[100];
	int i;
	int score = 0;
	
	scanf("%d",&num);
	
	for (i = 0; i < num; i++){
		scanf("%s",word);
		if(distinguish(word)==1){
			score++;
		}
	}
	printf("%d",score);
}

int distinguish(char* word){
	int i;
	int j = 0;
	int lng = 0;
	
	while(1){
		if(word[lng]=='\0'){
			break;
		}
		lng++;
	}
	
	for (i = 0; i < lng; i++){
		j = i+1;
		while(word[j] == word[i]){
			j++;
		}
		for(;j+1 < lng; j++){
			if(word[j + 1] == word[i]){
				return 0;
			}
		}
	}
	
	return 1;
}
