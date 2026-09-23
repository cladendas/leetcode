// 217. Contains Duplicate

#include "libraries.cpp"

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        s.reserve(nums.size());

        for (auto &&i : nums)
        {
            if (s.count(i)) {
                return true;
            }
            s.insert(i);
        }
        return false;
    }
};

void test() {
    Solution s;

}