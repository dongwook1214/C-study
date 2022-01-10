#include<stdio.h>

int main(){
	int num;
	int i;
	int x,y;
	
	scanf("%d",&num);
	
	for (i = 0; i < num; i++){
		scanf("%d %d",&x,&y);
		printf("%d\n",minNum(x,y));
	}
	
	return 0;
}

int minNum(x,y){
	int distance = y - x;
	int result = 0;
	int result2;
	int maxDistance;
	int a;
	int b;
	
	while(1){
		b = 0;
		result++;
		result2 = result;
		if(result2%2==0){
			a = result/2;
			for(;a > 0; a--){
				b += a;
			}
			maxDistance = b*2;
		}else{
			a = (result-1)/2;
			for(;a > 0; a--){
				b += a;
			}
			maxDistance = b*2 + (double)result2/(double)2 + 0.5;
		}
		
		if(distance <= maxDistance){
			break;
		}
	}
	return result;
}
