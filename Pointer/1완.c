#include <stdio.h>

void f(int *ptr_number){
	int sum = 0,i;

	for(i=0;i<5;i++){
		sum += ptr_number[i];
		}

	printf("%d", sum);
}

int main(){

	int number[5] = {10,20,30,40,50};

	f(number);

	return 0;
	}
