#include <stdio.h>

int main(){
	int y,h,m;

	scanf("%d.%d.%d",&y,&h,&m);

	printf("%04d.%02d.%02d\n",y,h,m);
	
	return 0;
}