#include<stdio.h>
#include<stdlib.h>
typedef struct ListNode {
	int val;
	struct ListNode* next;//后继节点
	struct ListNode* prev;//先驱节点
};
ListNode* NL(int val)
{
	ListNode* node;
	node = (ListNode*)malloc(sizeof(ListNode));
	node->val = val;
	node->prev = NULL;
	node->next = NULL;
	return node;
}
int main() 
{
	ListNode* n0 = NL(1);
	ListNode* n1 = NL(6);
	ListNode* n2 = NL(5);
	n0->next = n1;
	n1->next = n2;
	n1->prev = n0;
	n2->prev = n1;
	printf("%d", (n1->prev)->val);
	return 0;
}