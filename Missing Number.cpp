// 268. Missing Number

#include "libraries.cpp"

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            result ^= i ^ nums[i];
        }

        return result ^ nums.size();
    }
};

void test() {
    Solution s;
    std::vector<int> vec{3,0,1};
    PRINT(s.missingNumber(vec));
    vec = {9,6,4,2,3,5,7,0,1};
    PRINT(s.missingNumber(vec));
    vec = {0,1};
    PRINT(s.missingNumber(vec));
}