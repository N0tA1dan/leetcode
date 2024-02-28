/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3

Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

*/


#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> t;
        for (auto num : nums) {
            if (t[num] + 1 > nums.size() / 2) return num;
            t[num] += 1;
        }
        return 0;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    std::vector<int> nums1 = {3, 2, 3};
    int result1 = solution.majorityElement(nums1);
    std::cout << "Test Case 1: " << (result1 == 3 ? "Passed" : "Failed") << std::endl;

    // Test Case 2
    std::vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    int result2 = solution.majorityElement(nums2);
    std::cout << "Test Case 2: " << (result2 == 2 ? "Passed" : "Failed") << std::endl;

    // Additional Test Case (Add more if needed)
    // ...

    return 0;
}
