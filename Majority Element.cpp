// 169. Majority Element

#include "libraries.cpp"

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums.front();
        }

        unordered_map<int, int> m;
        for(auto it = nums.begin(); it != nums.end(); it++) {
            if (m.count(*it)) {
                m[*it]++;
            } else {
                m[*it] = 1;
            }
        }

        int key = 0;
        int value = 0;
        for (auto& i : m) {
            if (value < i.second) {
                value = i.second;
                key = i.first;
            }
        }

        return key;
    }
};

void test() {
    
}