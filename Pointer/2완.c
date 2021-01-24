#include <stdio.h> 

int main(){
	char name_arr[10][15] = {"kimsuchul", "leeyongsu", "kimdongsu", "bakgicheal", "kimyoungsuk",
							 "choigiwha", "leesunhee", "chebeansuk", "songdalsu", "hajongsik"   };	
	int i,j,k;

	for(i=0;i<10;i++){
		if(name_arr[i][0] == 'k'){
			for(j=0;name_arr[i][j] != '\0';j++){
				printf("%c",name_arr[i][j]);
			}
			printf("\n");
			}
		}

	return 0;
}
