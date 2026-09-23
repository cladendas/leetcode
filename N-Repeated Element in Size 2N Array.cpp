// 961. N-Repeated Element in Size 2N Array

#include "libraries.cpp"

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // std::sort(nums.begin(), nums.end());
        // for (int i = 1; i < nums.size(); i++)
        // {
        //     if (nums[i - 1] == nums[i]) {
        //         return nums[i];
        //     }
        // }
        std::set<int> s;

        for (auto &&i : nums)
        {
            if (s.count(i)) {
                return i;
            } else {
                s.insert(i);
            }
        }
        
        return 0;
    }
};

void test() {
    Solution s;
    std::vector<int> vec{2,1,2,5,3,2};
    std::cout << s.repeatedNTimes(vec);

}