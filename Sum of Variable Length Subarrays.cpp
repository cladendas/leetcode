// 3427. Sum of Variable Length Subarrays

#include "libraries.cpp"

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int result = 0;
        int start = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            start = std::max(0, i - nums[i]);
            for (int j = start; j <= i; j++)
            {
                result += nums[j];
            }
        }
        return result;
    }
};

void test() {
    Solution s;

    std::vector<int> vec = {2,3,1};
    std::cout << s.subarraySum(vec);

}