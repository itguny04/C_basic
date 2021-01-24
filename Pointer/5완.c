#include <stdio.h>

int f(int *arr){
	int min,temp;
	int i,j;

	for(i=0;i<5;i++){
		min = i;
		for(j=i;j<5;j++){
			if(arr[min] > arr[j]){
				temp = arr[min];
				arr[min] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
		}
	

}

int main(){
	int i;
	int arr[5];
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		}
	f(arr);

	return 0;
}
