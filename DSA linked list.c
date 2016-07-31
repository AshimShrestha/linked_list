/*
TITLE: Complete the C program to implement linked list (that we did in the class this week) with the function to delete the first node along with the logic to check the underflow condition. 
Author: Ashim Shrestha Date:31th July
Reference:  Data structures using C and C++
*/
#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int info;
 	struct node *next;
 };
 
 typedef struct node *nodeptr;
 nodeptr getnode();
 void freenode(nodeptr);
 void insertatfirst(nodeptr*,int);
 int deletefromfirst(nodeptr*);
 void displaylist();
 int main()
 {
 	int *p;
 	nodeptr list;
 	list=NULL;
 	
 	insertatfirst(&list,5);
 	insertatfirst(&list,6);
 	insertatfirst(&list,7);
 	insertatfirst(&list,8);
 	insertatfirst(&list,9);

	printf("The deleted item is %d.\n",deletefromfirst(&list));
	printf("The deleted item is %d.\n",deletefromfirst(&list)); 
	printf("The deleted item is %d.\n",deletefromfirst(&list));
	printf("The deleted item is %d.\n",deletefromfirst(&list));
	printf("The deleted item is %d.\n",deletefromfirst(&list));
	printf("The deleted item is %d.",deletefromfirst(&list));
	 displaylist(list);
 }
 
 nodeptr getnode()
 {
 	return (nodeptr) malloc(sizeof(struct node));
 }
 
 void freenode(nodeptr p)
 {
 	free(p);
 }
 
 void insertatfirst(nodeptr *p, int x)
 {
 	nodeptr q;
 	q=getnode();
 	q->info=x;
 	q->next=*p;
 	*p=q;
 }
 
void displaylist(nodeptr p)
 {
 	nodeptr ptr=p;
 	while(ptr!=NULL)
 	{
 		printf("%d",ptr->info);
 		ptr=ptr->next;
	 }
 }
 
int deletefromfirst(nodeptr *p)
{
	int x;
	nodeptr q;
	q=*p;
	if(q==NULL)
	{
		printf("Stack Underflow !!");
		exit(1);
	}
	else
	{
		x=q->info;
		*p=q->next;
		free(q);
		return(x);
	}
	
}
