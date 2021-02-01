#include <stdio.h>

// 다이얼이 다시 돌아오는 시간은 1초 

int main(void){
	int i;
	int sum = 0;
	char str[16];
	int str_num[27] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	
	scanf("%s", str);

	
	for(i=0; str[i]!='\0'; i++){
		sum += str_num[str[i]-'A'];
	}

	printf("%d", sum);

	return 0;
}
