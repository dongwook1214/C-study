#include<stdio.h>

int main(){
	
	int i;
	char word[100];
	int score = 0;
	scanf("%s",word);
	
	for (i = 0; i < 100; i++){
		if(word[i]=='\0'){
			break;
		}
		score += alpabet(i,word);
		score ++;
	}
	printf("%d",score);
	
	return 0;
}

int alpabet(int i, char* word){
	if(word[i]=='c'){
		if(word[i+1]=='='){
			return -1;
		}
		
		if(word[i+1]=='-'){
			return -1;
		}
	}
	
	else if(word[i]=='d'){
		if(word[i+1]=='z'){
			if(word[i+2]=='='){
				return -1;
			}
		}
		
		if(word[i+1]=='-'){
			return -1;
		}
	}
	
	else if(word[i]=='l'){
		if(word[i+1]=='j'){
			return -1;
		}
	}
	
	else if(word[i]=='n'){
		if(word[i+1]=='j'){
			return -1;
		}
	}
	
	else if(word[i]=='s'){
		if(word[i+1]=='='){
			return -1;
		}
	}
	
	else if(word[i]=='z'){
		if(word[i+1]=='='){
			return -1;
		
		}
	}
	
	return 0;

}


