//
// Created by User on 04/05/2025.
//

#ifndef CLEETCODEPROBLEMS_REVERSELINKEDLIST_H
#define CLEETCODEPROBLEMS_REVERSELINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int data;
    struct ListNode* next;
} ListNode;

typedef struct LinkedList {
    struct ListNode* head;
} LinkedList;

void reverseLinkedList(LinkedList * list);
void push(LinkedList* list, int data);
void printList(LinkedList* list);

#endif //CLEETCODEPROBLEMS_REVERSELINKEDLIST_H
