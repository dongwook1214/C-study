// stdio.h의 의미 Standard Input Output library Header 
// Header은 헤더파일을 의미한다. 헤더파일:소스 코드의 파일
#include <stdio.h>
#include <string.h>

int main(){

	char arr[50] = "dongwook";
    // strlen() string 값의 길이를 반환
    printf("%d\n",strlen(arr));

    char arr2[50];
    // strcpy(a,b) string값 arr2에 arr을 리턴
    strcpy(arr2,arr);
    printf("%s\n", arr2);

    // strcmp(a,b) a,b를 비교하고 같은 같이면 0을 리턴함
    printf("%d\n",strcmp(arr,arr2));

    // strcat(a,b) a 뒤에 b 붙여줌
    strcat(arr,arr2);
    printf("%s\n",arr);

    // strchr() 문자열에서 특정 문자부터 출력해줌
    char* pos = strchr(arr2,'g');
    printf("%s\n", pos);
    
    return 0;
}

