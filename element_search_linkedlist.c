#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
typedef struct node Node;
void linked_list_search(Node *head, int ele) {
	int flag = 0; // not found	
	Node *temp = head;
	while (temp != NULL) {
		if (temp->data == ele) {
			flag = 1;
			break;
		}
		temp = temp->next;
	}
	if (flag == 1) printf("Element found");
	else printf("Not found");
}
int main() {
	Node *head;
	Node *node1 = (Node *)malloc(sizeof(Node));
	Node *node2 = (Node *)malloc(sizeof(Node));
	Node *node3 = (Node *)malloc(sizeof(Node));
	Node *node4 = (Node *)malloc(sizeof(Node));
	node1->data = 10;
	node1->next = NULL;
	node2->data = 20;
	node2->next = NULL;
	node3->data = 30;
	node3->next = NULL;
	node4->data = 40;
	node4->next = NULL;
	// Connecting nodes
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	head = node1;
	printf("Enter an element to search: ");
	int search;
	scanf("%d", &search);
	linked_list_search(head, search);
	return 0;
}
