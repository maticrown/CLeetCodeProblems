//
// Created by User on 01/05/2025.
//

#include "Solution.h"


vector<int> Solution::plusOne(vector<int>& digits){
    digits[digits.size() - 1] ++;
    return digits;
}
