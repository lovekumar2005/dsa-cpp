// LeetCode #217: Contains Duplicate
// Question:
// Given an integer array nums, return true if any value appears
// at least twice in the array, and return false if every element
// is distinct.
//
// Example 1:
// Input: nums = [1, 2, 3, 1]
// Output: true
// Explanation: The number 1 appears twice.
//
// Example 2:
// Input: nums = [1, 2, 3, 4]
// Output: false
// Explanation: Every element is distinct.
//
// Example 3:
// Input: nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
// Output: true
//
// Approach: Sorting
// Time Complexity: O(n log n)
// Auxiliary Space Complexity: O(1) (excluding sort's stack space)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3, 1};

    if (solution.containsDuplicate(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}