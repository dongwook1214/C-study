#include<stdio.h>

int main(){
	
	int num;
	int scorenum;
	float percent[100] = {0};
	double average = 0;
	int i;
	int j;
	int scorelist[1000][100];
	
	scanf("%d",&num);
	
	for (i = 0; i < num; i++){
		
		average = 0;
		scanf("%d",&scorenum);
		
		for(j = 0; j < scorenum; j++){
			scanf("%d",&scorelist[i][j]);
			average += scorelist[i][j];
		}
		
		average = average / (double)scorenum;
		
		for(j = 0; j < scorenum ; j++){
			
			if(scorelist[i][j] > average){
				percent[i] += (double)100/(double)scorenum;
			}
		}
				
	}
	
	for (i = 0; i < num; i++){
		printf("%.3lf%%\n",percent[i]);
	}
	
	return 0;
}
