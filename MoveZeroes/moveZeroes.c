//
// Created by User on 04/05/2025.
//

#include "moveZeroes.h"

void moveZeroes(int* numArray, int size) {
    int pos = 0;
    for(int i = 0; i < size; i++) {
        if(numArray[i] != 0) {
            numArray[pos] = numArray[i];
            pos++;
        }
    }
    while (pos < size) {
        numArray[pos] = 0;
        pos++;
    }
}