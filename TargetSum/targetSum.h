//
// Created by User on 29/04/2025.
//

#ifndef CLEETCODEPROBLEMS_TARGETSUM_H
#define CLEETCODEPROBLEMS_TARGETSUM_H

#include <stdlib.h>
#include <stdio.h>
#include "stdbool.h"

typedef struct Entry {
    int key;
    int value;
    struct Entry* next;
} Entry;

typedef struct HashMap{
    Entry** buckets;
    int capacity;
} HashMap;


int* targetPairs(int* arr, int arrSize, int target, int* returnSize);

#endif //CLEETCODEPROBLEMS_TARGETSUM_H

