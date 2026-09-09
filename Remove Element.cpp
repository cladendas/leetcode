// 27. Remove Element
#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::erase_if(nums, [&](int num){
            return num == val;
        });

        return nums.size();
    }
};
