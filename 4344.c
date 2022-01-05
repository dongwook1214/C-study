#include<stdio.h>

int main(){
	int num,i,j,sum,num2,score;
	int scorelist[5000];
	
	scanf("%d",&num);
	for (i = 0; i < num; i++){
		sum = 0;
		score = 0;
		scanf("%d",&num2);
		for(j = 0; j < num2; j++){
			scanf("%d",&scorelist[j]);
			sum += scorelist[j];
		}
		for(j = 0; j < num2; j++){
			if(scorelist[j] > (double)sum / (double)num2){
				score++;
			}
		}
		printf("%.3f%%\n",(double)score / (double)num2 *100);
	}
	
	return 0;
}
