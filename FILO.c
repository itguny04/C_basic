#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int* stack, int* ESP, int stack_size, int data);
void pop(int* stack, int* ESP);
void size(int *ESP);
void empty(int *ESP);
void top(int* stack, int* ESP);

int main(void){
	char command[10];
	int i;
	int* stack;
	int stack_size;
	int stack_data;
	int ESP = 0;
	
	scanf("%d", &stack_size);
	stack = (int *)malloc(sizeof(int)*stack_size);
	
	for(i=0;i<stack_size;i++){
		scanf("%s", command);
		
		if(!strcmp(command, "push")){
			scanf("%d", &stack_data);
			push(stack, &ESP, stack_size, stack_data);
		}
	
		else if(!strcmp(command, "pop")){
			pop(stack, &ESP);
		}
		
		else if(!strcmp(command, "size")){
			size(&ESP);
		}
		
		else if(!strcmp(command, "empty")){
			empty(&ESP);
		}
		
		else if(!strcmp(command, "top")){
			top(stack, &ESP);
		}	
	}
	
	free(stack);
	return 0;
}


void push(int* stack, int* ESP, int stack_size, int data){
	if(stack_size == *ESP){
		printf("stack overflow!\n");
	}
	else{
		stack[(*ESP)++] = data;
	}	
	return ;
}

void pop(int* stack, int* ESP){
	if(*ESP == 0){
		printf("-1\n");
	}
	else{
		printf("%d\n" ,stack[--(*ESP)]);
		stack[*ESP] = 0;
	}
	return ;
}

void size(int *ESP){
	printf("%d\n",*ESP);
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

void top(int* stack, int* ESP){
	if(*ESP == 0){
		printf("-1\n");
	}
	else{
		printf("%d\n", stack[*ESP-1]);
	}
	return ;
}

