#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node{
	int data;
	struct node *next;
}ListNode;

typedef ListNode *LinkList;

void main()
{
	LinkList R;
	int n,k;
	LinkList initRing(int n,LinkList R);
	LinkList DeleteDeath(int n,int k,LinkList R);
	cout<<"总人数n=      ,报数上限k=          "<<endl;
	cin>>n;
	cin>>k;
	R=initRing(n,R);
	R=DeleteDeath(n,k,R);
}

/*build up the ring*/
LinkList initRing(int n,LinkList R)
{
	ListNode *p,*q;
	int i;
	R=q=new ListNode;
	for(i=1;i<n;i++)
	{
		p=new ListNode;
		p->data=i;
		p=p->next;
		
		

	}
	p->next=q;
	R=q;

	delete p,q;
	return R;
}

LinkList DeleteDeath(int n,int k,LinkList R)
{
	int i,j;
	ListNode *p,*q;
	p=R;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k-1;j++)
			q=q->next;
		p=q->next;
		q=p->next;
		delete p;
		cout<<q->data<<"   ";
		if(i%10==0)
			cout<<endl;
		R=q;
	}
	cout<<endl;
	delete q;
	return R;
}