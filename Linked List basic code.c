
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node* next ;
};

//createNode function is used to create a new node 
struct Node* createNode (int value) {
    struct Node* newNode = (struct Node*) malloc (sizeof(struct Node)) ;
    newNode -> data = value ;
    newNode -> next = NULL;
    
    return newNode ;
}
//Function to print the linked list
void printList (struct Node* head) {
    while (head != NULL) {
        printf ("%d -> ", head -> data) ;
        head = head -> next ;
    }
    printf ("NULL\n");
}

int main () {
    
    struct Node* head = createNode(1);
    struct Node* secondNode = createNode(2);
    struct Node* thirdNode = createNode (3);
    
    head-> next = secondNode ;
    secondNode->next = thirdNode;
    
    printf ("linked list:");
    printList (head);
    
    return 0;
}
