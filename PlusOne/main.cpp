#include "Solution.h"
#include <iostream>

int main() {
    vector<int> digits = {1,2,3};
    vector<int> result;
    Solution s;
    result = s.plusOne(digits);
    for(int element : result) {
        cout << element << " ";
    }
    cout << endl;
}
