//
// Created by User on 04/05/2025.
//

#include "reverseLinkedList.h"

// Function to add a node to the front of the list
void push(LinkedList* list, int data) {
    ListNode * newNode = malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->next = list->head;
    list->head = newNode;
}

// Function to print the list
void printList(LinkedList* list) {
    ListNode * current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void reverseLinkedList(LinkedList * list) {
    ListNode * prev = NULL;
    ListNode * current = list->head;
    ListNode * next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    list->head = prev;
}