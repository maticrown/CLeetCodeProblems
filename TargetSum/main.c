//
// Created by User on 29/04/2025.
//
#include "targetSum.h"

int main()
{
    int arr[] = {2,7,3,6,5,4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int returnSize = 0;
    int * pairs = targetPairs(arr, arrSize, 9, &returnSize);

    for(int i = 0; i < returnSize; i+=2) {
        printf("Pair (%d%d)\n", pairs[i], pairs[i+1]);
    }
    free(pairs);
    return 0;
}

