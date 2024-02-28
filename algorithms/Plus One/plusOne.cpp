/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 
[user@archlinux Plus One]$ cat plusOne.cpp
/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].

Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
*/

#include <iostream>
#include <vector>
#include <cassert>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        for(int i = digits.size() -1;  i>= 0; i--){
            digits[i]++;
            if(digits[i] <= 9) return digits;
            else{
                digits[i] = 0;
            }
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};

int main() {
    Solution solution;

    std::vector<int> input1 = {1, 2, 3};
    std::vector<int> output1 = solution.plusOne(input1);
    assert(output1 == std::vector<int>({1, 2, 4}));
    std::cout << "Test Case 1 Passed" << std::endl;

    std::vector<int> input2 = {4, 3, 2, 1};
    std::vector<int> output2 = solution.plusOne(input2);
    assert(output2 == std::vector<int>({4, 3, 2, 2}));
    std::cout << "Test Case 2 Passed" << std::endl;

    std::vector<int> input3 = {9};
    std::vector<int> output3 = solution.plusOne(input3);
    assert(output3 == std::vector<int>({1, 0}));
    std::cout << "Test Case 3 Passed" << std::endl;

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}
