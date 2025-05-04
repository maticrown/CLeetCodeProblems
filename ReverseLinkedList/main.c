//
// Created by User on 04/05/2025.
//

#include "reverseLinkedList.h"

int main() {
    LinkedList linkedList;
    linkedList.head = NULL;
    // Build the list: 3 -> 2 -> 1
    push(&linkedList, 1);
    push(&linkedList, 2);
    push(&linkedList, 3);

    printf("Original list:\n");
    printList(&linkedList);
    reverseLinkedList(&linkedList);
    printf("Reversed list:\n");
    printList(&linkedList);
}