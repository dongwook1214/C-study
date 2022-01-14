#include<stdio.h>

int location(int num,char *word){
    int i;
    for(i = 0; i <= 99; i++){
        if(word[i]==(char)num){
            return i;
        }
    }
    return -1;
}

int main(){
    int i;
    char word[100]={0};
    scanf("%s",word);
    
    for(i = 97; i <= 122; i++){
        printf("%d ",location(i,word));
    }

}