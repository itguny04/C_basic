#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int* stack, int* ESP, int stack_size, int data);
int pop(int* stack, int* ESP);
void size(int* ESP);
void empty(int *ESP);
void show(int* stack1, int* stack2, int* ESP1, int* ESP2);

int main(void){
	int* stack1,* stack2;
	int ESP1, ESP2;
	int data;
	int t_case;
	int i, tmp;
	char command[10];
	
	scanf("%d", &t_case);
	stack1 = (int *)calloc(t_case, sizeof(int));
	stack2 = (int *)calloc(t_case, sizeof(int));
	
	for(i=0;i<t_case;i++){
		scanf("%s", command);
		
		if(!strcmp(command,"push")){
			scanf("%d", &data);	
			push(stack1, &ESP1, t_case, data);
			push(stack2, &ESP2, t_case, data);	
		}
		
		else if(!strcmp(command, "pop1")){
				tmp =  pop(stack1, &ESP1);
				if(tmp != 0){
					push(stack2, &ESP2, t_case, tmp);
				}
		}
		else if(!strcmp(command, "pop2")){
				tmp =  pop(stack2, &ESP2);
				if(tmp != 0){
					push(stack1, &ESP1, t_case, tmp);
				}
		}
		
		else if(!strcmp(command, "size1")){
			size(&ESP1);
		}
		else if(!strcmp(command, "size2")){
			size(&ESP2);
		}
		
		else if(!strcmp(command, "empty1")){
			empty(&ESP1);
		}
		else if(!strcmp(command, "empty2")){
			empty(&ESP2);
		}
		
		else if(!strcmp(command, "show")){
			show(stack1, stack2, &ESP1, &ESP2);
		}	
	}
	
	free(stack1);
	free(stack2);
	
	return 0;	
}

void push(int* stack, int* ESP, int stack_size, int data){
	if(stack_size == *ESP){
		puts("overflow");
	}
	else{
		stack[(*ESP)++] = data;
	}
	return ;
}

int pop(int* stack, int* ESP){
	int tmp;
	
	if(*ESP == 0){
		puts("-1");
	}
	else{
		tmp = stack[--(*ESP)];
		stack[(*ESP)] = 0;
		return tmp;
	}
	return 0;
}

void size(int* ESP){
	printf("%d\n", *ESP);
	return ;
}

void empty(int *ESP){
	
	if(*ESP == 0){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	return ;
}

void show(int* stack1, int* stack2, int* ESP1, int* ESP2){
	int i;
	int max;
	
	if(*ESP1 > *ESP2){
		max = *ESP1;
	}
	else {
		max = *ESP2;
	}
	
	for(i=max-1;i>=0;i--){
		printf("%d %d\n", stack1[i], stack2[i]);
	}
	return ;
}
