#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node *next; 
}Node;

// con tro top cua ngan xep
Node *top = NULL;

// kiem tra ngan xep co rong hay khong
int isEmpty(){
	if(top == NULL){
		return 1; 
	} 
	return 0; 
} 

// them phan tu
void push(int value){
	// tao node moi
	Node *newNode =(Node *) malloc(sizeof(Node)); 
	newNode -> data = value;
	newNode -> next = top;
	 
} 

// xoa phan tu  
void pop(){
	if(isEmpty() == 1){
		printf("Ngan xep rong");
		return; 
	} 
	Node *temp = top;
	top = top -> next;
	free(temp);
	printf("Lay ra khoi ngan xep thanh cong"); 
} 

int peek(){
	if(isEmpty() == 1){
		printf("Ngan xep rong");
		return -2; 
	} 
	return top -> data 
}


int main(){
	
	return 0; 
} 
