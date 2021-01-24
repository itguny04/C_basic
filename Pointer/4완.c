#include <stdio.h>

void f(int *arr){
	printf("%d\n",arr[1]+arr[2]);
	printf("%d\n",arr[1]-arr[2]);
	}

int main(){
	int num[3];

	scanf("%d",&num[1]);
	scanf("%d",&num[2]);
	
	f(num);

	return 0;
	}
