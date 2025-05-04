//
// Created by User on 04/05/2025.
//

int countBits(int num) {
    int count = 0;
    while(num != 0) {
        count += num & 1;
        num = num >> 1;
    }
    return count;
}
