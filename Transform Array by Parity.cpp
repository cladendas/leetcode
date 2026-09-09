// 3467. Transform Array by Parity

#include "libraries.cpp"

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        std::transform(nums.begin(), nums.end(), nums.begin(), 
            [](int& n) {
                if (n & 1) {
                    return 1;
                } else {
                    return 0;
                }
            }
        );

        std::sort(nums.begin(), nums.end());

        return nums;
    }
};

void test() {
    Solution s;

    std::vector<int> vec = {2,3,1};
    for (auto &&i : s.transformArray(vec))
    {
        std::cout << i << ' ';
    }
}