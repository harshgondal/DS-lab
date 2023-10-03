#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct queue{
	int a[50];
	int front;
	int rear;
	int front1;
	int rear1;
	int n;
	int m;
	int r;
}queue;
bool isempty(queue *q)
{
	if(q->rear==q->front)
	{
		return true;
	}
	else{
		return false;
	}
}
bool isempty2(queue *q)
{
	if(q->rear1==q->front1)
	{
		return true;
	}
	else{
		return false;
	}
}
bool isfull(queue *q)
{
	if((q->rear+1)%q->m==q->front)
	{
		return true;
	}
	else{
		return false;
	}
}
bool isfull1(queue *q)
{
	if((q->rear1+1)%q->r==q->front1)
	{
		return true;
	}
	else{
		return false;
	}
}
void insert1(queue *q,int ele)
{
	if(!isfull(q))
	{
		q->rear=(q->rear+1)%q->m;
		q->a[q->rear]=ele;
	}
	else{
		printf("Queue is full\n");
	}
}
void insert2(queue *q,int ele)
{
	if(!isfull1(q))
	{
		q->rear1=(q->rear1+1)%q->r;
		q->a[(q->rear1)+(q->r)]=ele;
	}
	else{
		printf("Queue is full\n");
	}
}
int delete1(queue *q)
{
	if(!isempty(q))
	{
		q->front=(q->front+1)%q->m;
		return q->a[q->front];
	}
	else{
		printf("Queue is empty\n");
		return -1;
	}
}
int delete2(queue *q)
{
	if(!isempty2(q))
	{
		q->front1=(q->front1+1)%q->r;
		return q->a[q->front1];
	}
	else{
		printf("Queue is empty\n");
		return -1;
	}
}
// void display1(queue *q)
// {
// 	int i=(q->front+1)%q->m;
// 	while(i!=(q->rear+1)%q->m)
// 	{
// 		printf("%d\t",q->a[i]);
// 		i=(i+1)%q->m;
// 	}
// }
// void display2(queue *q)
// {
// 	int i=(q->front1-1)%q->r;
// 	while(i!=(q->rear1-1)%q->r)
// 	{
// 		printf("%d\t",q->a[i]);
// 		i=(i-1)%q->r;
// 	}
// }
int main(){
	queue *q=malloc(sizeof(queue));
	printf("enter n\n");
	scanf("%d",&q->n);
	int rear=0;int front=0;
	int rear1=0;int front1=0;
	int m=((q->n)/2)+1;
	int r=((q->n)-m)+1;
	while(true){
		printf("Select an option\n");
		printf("1. Insert1\n");
		printf("2.Insert 2\n");
		printf("3.Delete 1\n");
		printf("4.Delete 2\n");
		printf("5.Display 1\n");
		printf("6.Display 2\n");
		printf("7.Exit\n");
		int choice;
		scanf("%d",&choice);
		if(choice==1){
			int element;
			printf("enter element to insert\n");
			scanf("%d",&element);
			insert1(q,element);
		}
		else if (choice==2){
			int element;
			printf("enter element to insert\n");
			scanf("%d",&element);
			insert2(q,element);
		}
		else if(choice==3){
			delete1(q);
		}
		else if(choice==4){
			delete2(q);
		}
		// else if(choice==5){
		// 	display1(q);
		// }
		// else if(choice==6){
		// 	display2(q);
		// }
		else if(choice==7){
			break;
		}
		else printf("Select a valid option!!\n");
	}
	free(q);
	return 0;
}