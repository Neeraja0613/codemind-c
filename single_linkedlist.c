#include <stdio.h>
#include <stdlib.h>

// Self-referential structure
struct node {
    int data;
    struct node *next;
};

// Aliasing
typedef struct node Node;
Node *head = NULL;

// Function to create a list by inserting a node at the end
void create(int val) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to search for a value in the list
int search(int val) {
    Node *temp = head;
    while (temp != NULL) {
        if (temp->data == val) {
            return 1; // Value found
        }
        temp = temp->next;
    }
    return 0; // Value not found
}

// Function to traverse and display the linked list
void traverse() {
    if (head == NULL) {
        printf("No nodes to display\n");
        return;
    }
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int ch;
    while (1) { // Infinite loop
        printf("1. Create (insert at end)\n2. Search\n3. Traverse\nAny other key to exit\n");
        scanf("%d", &ch);
        if (ch == 1) {
            // Create (insert at end)
            int val;
            printf("Enter a value for the node to be inserted: ");
            scanf("%d", &val);
            create(val);
        } else if (ch == 2) {
            // Search
            int val;
            printf("Enter a value to search: ");
            scanf("%d", &val);
            if (search(val)) {
                printf("Value %d found in the list\n", val);
            } else {
                printf("Value %d not found in the list\n", val);
            }
        } else if (ch == 3) {
            // Traverse
            traverse();
        } else {
            printf("Thank you for testing. ADIEU!!\n");
            break;
        }
    }
    return 0;
}

