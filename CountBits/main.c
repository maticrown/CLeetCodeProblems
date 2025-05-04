//
// Created by User on 04/05/2025.
//
#include "countBits.h"
#include <stdio.h>

int main() {
    int num = 0b10010110;
    int  count = countBits(num);
    printf("count of bits %d\n", count);
    return 0;
}
