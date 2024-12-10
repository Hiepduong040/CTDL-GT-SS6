#include<stdio.h>
#include<stdlib.h>

#define MAX 100 

// cau truc ngan xep
typedef struct{
	int array[MAX];
	int top;
	 
}Stack; 

// khoi tao stack rong  
void inital(Stack* stack){
	stack -> top = -1; 
} 

// kiem tra xem co rong hay khong
int isEmpty(Stack* stack){
	if(stack -> top == -1){
		return 1; 
	} 
	return 0; 
} 

// kiem tra xem co day hay khong
 int isFull(Stack* stack){
 	if(stack ->top = MAX - 1){
 		return 1; 
	 } 
	return 0; 
 } 
 
 void push(Stack* stack, int value){
 	if(isFull(stack) == 1){
 		printf("xin loi ngan xep da day roi");
		 return; 
	 } 
	 stack -> array[++(stack->top )] = value; 
 } 
 
 void printStack(Stack* stack){
 	for(int i ; i < MAX; i++){
 		printf("%d\n", stack->array array[i] ) 
	 } 
 } 

 
int main(){
	int value;
	Stack* stack; 
	inital(&stack) ;
	do{
		printf("============================MENU==========================");
		printf("1. THem phan tu vao ngan xep(sep trung)\n");
		printf("2. In ra ngan xxep\n");
		printf("0. Thoat\n");
		printf("Moi ban chon 0-2\n");
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 0: 
				exit(0);
			case 1:
				printf( " Nhap vao gia tri can them");
				scanf("%d", &value);
				push(&stack, value);
				break; 
			case 2:
				printStack(&stack);
				break; 
			default:
				printf("VUi long chon 0-2"); 
				break; 
		} 
	}while(1==1) 
	return 0;	
} 
