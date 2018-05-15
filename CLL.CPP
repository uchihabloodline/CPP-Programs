#include<iostream.h>
#include<conio.h>
struct node
{
int no;
int mark;
struct node* next;
}*start;
void main()
{
clrscr();
node *temp;
int n,i=0;
cin>>n;
while(i<n)
	{
	temp = new(struct node);
	temp->no=i+1;
	temp->mark=0;
	if(i==0)
	{
	start=temp;
	temp->next=start;
	}
	else
	{
	struct node *temp1;
	temp1=start;
	while(temp1->next!=start)
		{
		temp1=temp1->next;
		}
	temp1->next=temp;
	temp->next=start;
	}
	i++;
	}
cout<<"linkedlist is \n";
temp=start;
int flag=1;
int ctr=0;
while(1)
	{
	if(temp->mark!=0)
		temp=temp->next;
	else
	{
		if(flag!=0)
		{
		ctr++;
		temp->mark=1;
		if(ctr==n)
		{
		cout<<temp->no;
		break;
		}
		flag=0;
		}
		else
		{
		temp=temp->next;
		flag++;
		}
	}
	}


getch();
}