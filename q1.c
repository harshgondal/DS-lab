#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
	int data;
	struct node *rptr;
	struct node *lptr;
}node;
void insertright(node **head,int value){
	if(*head==NULL){
		(*head)=malloc(sizeof(node));
		(*head)->data=value;
		(*head)->rptr=NULL;
		(*head)->lptr=NULL;
	}
	else{
		node *temp=malloc(sizeof(node));
		temp->data=value;
		node *p=*head;
		while(p->rptr!=NULL){
			p=p->rptr;
		}
		p->rptr=temp;
		temp->lptr=p;
		temp->rptr=NULL;
	}
}
void insertleft(node **head,int value){
	if(*head==NULL){
		(*head)=malloc(sizeof(node));
		(*head)->data=value;
		(*head)->rptr=NULL;
		(*head)->lptr=NULL;
	}
	else{
		node *temp=malloc(sizeof(node));
		temp->data=value;
		node *p=*head;
		while(p->lptr!=NULL){
			p=p->lptr;
		}
		p->lptr=temp;
		temp->rptr=p;
		temp->lptr=NULL;
		*head=temp;
	}
}
int deleteright(node **head){
	node *p=*head;
	node *q=(*head)->rptr;
	while(q->rptr!=NULL){
		p=p->rptr;
		q=q->rptr;
	}
	p->rptr=NULL;
	int x=q->data;
	free(q);
	return x;
}
int deleteleft(node **head){
	node*p=*head;
	(*head)=(*head)->rptr;
	(*head)->lptr=NULL;
	int x=p->data;
	free(p);
	return x;
}
void display(node **head){
	node *p=*head;
	while(p!=NULL){
		printf("%d\t",p->data);
		p=p->rptr;
	}
}
int main(){
	node *head=NULL;
    printf("1. Insertright \n2. InsertLeft\n3. Deleteright \n4. DeleteLeft\n5. Display \n6. Exit");
    while(true){
        printf("\nChoice: ");
        int choice;
        scanf("%d", &choice);
        if(choice==1){
        	int value;
        	printf("enter element\n");
        	scanf("%d",&value);
            insertright(&head,value);
        }
        else if(choice==2){
        	int value;
        	printf("enter element\n");
        	scanf("%d",&value);
            insertleft(&head,value);
        }
        else if(choice==3){
            if (head==NULL){
                printf("\nQueue Empty!!\n");
                continue;
            }
            printf("\nDeleted %d\n", deleteright(&head));
        }
        else if(choice==4){
            if (head==NULL){
                printf("\nQueue Empty!!\n");
                continue;
            }
            printf("\nDeleted %d\n", deleteleft(&head));
        }
        else if(choice==5){
            if (head==NULL){
                printf("\nQueue Empty!!\n");
                continue;
            }
            display(&head);
        }

        else if(choice==6){
            break;
        }

        else printf("\nEnter a valid choice!!\n");
    }
}