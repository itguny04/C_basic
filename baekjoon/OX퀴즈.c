#include <stdio.h>

int main(void){
	
	int t, i, j;
	int up_score = 1, score = 0 ;
	char omr[100] = {};
	
	scanf("%d", &t);
	
	while(t--){
		score = 0;
		up_score = 1;
		
		scanf("%s",omr);
		
		for(i=0; omr[i]!='\0'; i++){
			
			if(omr[i] == 'O'){
				score += up_score++;
			}else{
				up_score = 1;
			}		
		}	
		printf("%d\n", score);
	}
	
	return 0;
}
