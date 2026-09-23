// 1365. How Many Numbers Are Smaller Than the Current Number

#include "libraries.cpp"

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j && nums[i] > nums[j]) {
                    result[i]++;
                }
            }
        }
        return result;
    }
};

void test() {
    Solution s;
    std::vector<int> vec{8,1,2,2,3};

    for (auto &&i : s.smallerNumbersThanCurrent(vec))
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    vec = {6,5,4,8};

    for (auto &&i : s.smallerNumbersThanCurrent(vec))
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}