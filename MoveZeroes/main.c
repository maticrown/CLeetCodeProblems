//
// Created by User on 04/05/2025.
//
#include "moveZeroes.h"

int main() {
    int numArray[] = {0,4,2,0,5,2,1,0,0,4,6};
    int size = sizeof(numArray) / sizeof(numArray[0]);
    moveZeroes(numArray, size);
    for(int i = 0; i < size; i++) {
        printf("numArray[%d] %d\n", i, numArray[i]);
    }
    return 0;
}