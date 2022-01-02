#include <stdio.h>

int main(){
	
	int a;
	int b = 0;
	int i;
	double sum = 0;
	int num[1000]={0};
	
	scanf("%d",&a);
	
	
	for(i = 0; i < a; i++){
		scanf("%d",&num[i]);
		if(num[i] > b){
			b = num[i];
		}
	}
	
	for (i = 0; i < a; i++){
		sum += (double)num[i] / (double)b * 100;
	}
	
	printf("%f",(double)sum / (double)a);
	
	return 0;
	
}
