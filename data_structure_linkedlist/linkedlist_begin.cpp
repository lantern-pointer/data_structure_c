//#include<stdio.h>
//#include<stdlib.h>
//typedef struct ListNode {
//	int data;//数据域
//	struct ListNode* next;//指针域
//}ListNode;
//ListNode *createnewnode(int val) {//初始化链表
//	ListNode *node;
//	node = (ListNode*)malloc(sizeof(ListNode));
//	node->data = val;
//	node->next = NULL;
//	return node;
//}
//void insert(ListNode* origin, ListNode* p) {//n0被插入前一个的元素，p是插入元素
//	ListNode* temp=origin->next;
//	p->next = temp;
//	origin->next = p;
//}
//void removItem(ListNode* n) {
//	if (!n->next)return;
//	ListNode* p = n->next;
//	ListNode* n1 = p->next;
//	n->next = n1;
//	free(p);
//}
//int main()
//{
//	ListNode*n0 = createnewnode(0);
//	ListNode*n1 = createnewnode(1);
//	ListNode*n2 = createnewnode(2);
//	ListNode*n3 = createnewnode(3);
//	n0->next = n2;
//	insert(n0, n1);
//	printf("%d", n2->data);
//	return 0;
//}