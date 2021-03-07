#include <stdio.h>

int main(void){
	char name[50][50] = {};
	char arr[50] = {};
	int N;
	int i, j;
	
	scanf("%d", &N);
	
	for(i=0;i<N;i++){
		scanf("%s",name[i]);
	}
	
	// 파일의 이름의 길이는 모두 같음  
	for(i=1;i<N;i++){
		for(j=0;name[i][j]!='\0';j++){
			if(name[i][j] == name[i-1][j]){
				arr[j] = name[i][j];
			}
			else{
				arr[j] = '?';
			}
		}
	}
	
	printf("%s\n", arr);
	
	return 0;	
}