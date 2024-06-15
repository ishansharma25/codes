#include<stdio.h>
#include<stdlib.h>
struct link
{
	int data;
	struct link *next;
};
void display(struct link *first)
{
	while(first!=NULL)
	{
		printf("Data=%d\n",first->data);
		first=first->next;
	}
}
struct link* input()
{
link *list,*first,*pre;
int n=0,ch;
	do
	{
		list=(link*)malloc(sizeof(link));
		if(n==0)
		{
		printf("Enter Data:");
		scanf("%d",&list->data);
		list->next=NULL;
		first=list;
		pre=list;
		n++;
		}
		else
		{
	    printf("Enter Data:");
		scanf("%d",&list->data);
		list->next=NULL;
		pre->next=list;
		pre=list;
		}
	printf("1 for more enter 0 to end:");
	scanf("%d",&ch);
     }
	while(ch!=0);
 return(first);
}
struct link *merge(struct link *first1,struct link *first2)
{
	struct link *first;
	 first=first1;                 
              while (first->next!=NULL)   
			  {        
			  first=first->next;
		}
                first->next=first2;   
                return(first1);
}
int main()
{
	int p;
	struct link *first1,*first2,*first,*list,*pre;
	do
	{
	 printf("1. Create\n"
		  "2. Display1\n"
		  "3. Display2\n"
		  "4. Merge\n"
		  "5.Display merge\n"
		  "0. Quit\n Enter your choice:");
	 scanf("%d",&p);
	 if(p==1)
	 {
		first1=first;
		first=input();
		first2=first;
	 }
	 else if(p==2)
	 {
		display(first1);
	 }
	 else if(p==3)
	 {
	 		display(first2);
	 }
	 else if(p==4)
	 {
	 	first=merge(first1,first2);
	 }
	 else if(p==5)
	 {
	 display(first);
	 }
	}while(p!=0);
return(0);
}

