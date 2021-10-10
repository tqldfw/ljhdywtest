#include<stdio.h>
#include<stdlib.h>
struct ListNode 
{
	int val;
	struct ListNode *next;
}; 
int count;
struct ListNode *creat()
{
	struct ListNode *head=NULL,*pnew,*pend;
	count=0;
	pnew=pend=(struct ListNode*)malloc(sizeof(struct ListNode));
	pnew->val=-1;
	scanf("%d",&pnew->val);
	while(pnew->val!=-1)
	{
		count++;
		if(count==1)
		{
			pnew->next=NULL;
			head=pnew;
			pend=pnew;
		}
		else
		{
			pnew->next=NULL;
			pend->next=pnew;
			pend=pnew;
		}
		pnew=(struct ListNode*)malloc(sizeof(struct ListNode));
		pnew->val=-1;
		scanf("%d",&pnew->val);
	}
	free(pnew);
	return head;
}
void print(struct ListNode *head)
{
	struct ListNode *ptemp;
	int ilndex=0;
	ptemp=head;
	while(ptemp!=NULL)
	{
		ilndex++;
		printf("%d",ptemp->val);
		ptemp=ptemp->next;
	}
}
int main()
{
	print(creat());
}
