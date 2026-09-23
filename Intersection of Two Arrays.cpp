// 349. Intersection of Two Arrays

#include "libraries.cpp"

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        auto it1 = unique(nums1.begin(), nums1.end());
        auto it2 = unique(nums2.begin(), nums2.end());

        vector<int> result;
        for(auto it = nums1.begin(); it != it1; it++) {
            for(auto jt = nums2.begin(); jt != it2; jt++) {
                if (*it == *jt) {
                    result.push_back(*it);
                }
            }
        }

        return result;
    }
};

void test() {
    
}