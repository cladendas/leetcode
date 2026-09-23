// 1512. Number of Good Pairs

#include "libraries.cpp"

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (i < j && nums[i] == nums[j]) {
                    result++;
                }
            }
        }
        return result;
    }
};

void test() {
    Solution s;
    std::vector<int> vec{1,2,3,1,1,3};
    std::cout << s.numIdenticalPairs(vec) << '\n';
    
    vec = {1,1,1,1};
    std::cout << s.numIdenticalPairs(vec) << '\n';

    vec = {1,2,3};
    std::cout << s.numIdenticalPairs(vec) << '\n';
}