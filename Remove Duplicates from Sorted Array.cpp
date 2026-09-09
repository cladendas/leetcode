// 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        auto it = std::unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());

        return nums.size();
    }
};

