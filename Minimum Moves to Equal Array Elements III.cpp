// 3736. Minimum Moves to Equal Array Elements III

#include "libraries.cpp"

class Solution {
public:
    int minMoves(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            result += (nums.back() - nums[i]);
        }
        return result;
    }
};

void test() {
    Solution s;
    std::vector<int> vec{4,4,5};
    std::cout << s.minMoves(vec);

}