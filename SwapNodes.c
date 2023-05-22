#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void push(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* last = *head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
    }
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
void swapNodes(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return;
    }
    struct Node* curr = head;
    while (curr != NULL && curr->next != NULL) {
      
        struct Node* nextNode = curr->next->next;
        
        if (nextNode != NULL) {
            int temp = curr->data;
            curr->data = nextNode->data;
            nextNode->data = temp;
        }
        
        curr = curr->next;
    }
}
int main() {
    struct Node* head = NULL;
    int num,value;
    printf("Enter no. of terms : ");
	scanf("%d", &num);
    for (int i=0;i<num;i++){
        printf("Enter value : ");
		scanf("%d", &value);
    	push(&head, value);
    	
	}
    printf("Original list: ");
    printList(head);
    swapNodes(head);
    printf("Output after swapping : ");
    printList(head);
    return 0;
}