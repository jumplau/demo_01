#include<stdio.h>
typedef struct {
	int val;//data ��
	struct ListNode* next;//������һ���ڵ��ָ��  
}ListNode;


int main(){
	ListNode a,b,c,d,e; 
	
	a.val=1;
	b.val=2;
	c.val=3;
	d.val=4;
	e.val=5;
	
	a.next=&b;
	b.next=&c;
	c.next=&d;
	d.next=&e;
	e.next=NULL;
	
	ListNode *head=&a;
	while(head){
		
		printf("val=[%d] address=[%p] next=[%p]\n",head->val ,head,head->next);
		head=head->next;
	} 
	return 0;
} 
