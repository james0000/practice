#include <stdio.h>
#include<stdlib.h>
struct node {
int v;
struct node *prev,*next;

};
struct node *head=NULL;


void reverse(struct node *list){

	struct node *temp,*l;
	l=temp=head;

	if(list->next!=NULL){
		reverse(list->next);
		l=list->prev;
		list->prev=list->next;
		list->next=l;

	}
	else {	

		head=list;
		head->next=list->prev;
	}


}

void add(int x){


	struct node *temp,*l;

	temp=(struct node *)malloc(sizeof(*temp));

	temp->next=NULL;
	temp->prev=NULL;
	temp->v=x;

	if(!head){
		head=temp;

		return;
	}
	l=head;

	while(l->next!=NULL){	
		l=l->next;

	}

	l->next=temp;
	temp->prev=l;
}

print(){


	struct node *temp,*l;
	l=temp=head;


	if(!temp){

		printf("no elements \n");
		return;
	}

	while(l!=NULL){
		printf("%d \t",l->v);
		l=l->next;
	}
	printf("\n");
}
main(){
	int i=0;
	add(5);
	add(6);
	add(7);

	for(i=10;i<20;i++)
		add(i);
	print();
	reverse(head);
	head->prev=NULL;
	print();

}
