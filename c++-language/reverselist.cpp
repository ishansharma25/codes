#include<bits/stdc++.h>
using namespace std;
struct link
{
	int data;
	struct link *next;
};

link *reverseList(link* head)
{
    struct link *del,*del1,*temp;
        del1=NULL;
        del=head;
        temp=NULL;
        while(head!=NULL)
        {
			del1=head->next;
			head->next=temp;
			temp=head;
			head=del1;

/*
           del1=head->next;
			temp=del1->next;
			temp->next=del1;
			del1->next=head;
			head->next=NULL;*/
		
			//cout<<head->data;
          
        }
		head=temp;
		for(int i=0;head!=NULL;i++)
		{
		cout<<i<<"--"<<head->data<<"\n";
		head=head->next;
		if(head->next==NULL)
		break;

		
		}
       
      //  return head;
        
       
        
}

int main()
{
	int n=0,choice;
	struct link *list,*first,*pre;
	do
	{
		list=(link*)malloc(sizeof(link));
		if(n==0)
		{
			cout<<"enter data:";
			scanf("%d",&list->data);
			list->next=NULL;
			first=list;
			pre=list;
			n++;
		}
		else
		{
			printf("enter data:");
			scanf("%d",&list->data);
			list->next=NULL;
			pre->next=list;
			pre=list;
		}
	   	printf("To enter more data press 1 otherwise 0:");
		scanf("%d",&choice);
	}
	while(choice!=0);

first=reverseList(first);

	while(first!=NULL)
	{
		printf("Data=%d\n",first->data);
		first=first->next;
	}
	return 0;
	}
	                                                                                                                        
    
