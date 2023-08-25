#include <stdio.h>
#include <stdlib.h>

struct node {
	char data;
	struct node *next;
};

void fun(struct node *start) {
	if(start == NULL) return;
	printf("%c ", start->data);
	if(start -> next != NULL)
		fun(start->next->next);
	printf("%c ", start->data);
}

int main() {
	struct node *I = (struct node*) malloc(sizeof(struct node));
	struct node *I2 = (struct node*) malloc(sizeof(struct node));
	struct node *T = (struct node*) malloc(sizeof(struct node));
	struct node *K = (struct node*) malloc(sizeof(struct node));
	struct node *G = (struct node*) malloc(sizeof(struct node));
	struct node *P = (struct node*) malloc(sizeof(struct node));

	I->data = 'I';
	I2->data = 'I';
	T->data = 'T';
	K->data = 'K';
	G->data = 'G';
	P->data = 'P';

	I -> next = I2;
	I2 -> next = T;
	T -> next = K;
	K -> next = G;
	G -> next = P;

	
	fun(I);


	return 0;
}
