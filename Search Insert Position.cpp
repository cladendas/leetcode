// 35. Search Insert Position

#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size();
        int mid = 0;

        while (first < last) {
            mid = first + (last - first) / 2;
            if (nums[mid] < target) {
                first = mid + 1;
            } else if (nums[mid] >= target) {
                last = mid;
            }
        }

        return first;
    }
};

void check(std::vector<int> nums, int target) {
    Solution s;
    int result = s.searchInsert(nums, target);
    std::cout << __LINE__ << " - " << result << '\n';
}

int main() {

    check({1,3}, 4);
    check({1,3,5,6}, 5);
    check({1,3,5,6}, 1);
    check({1,3,5,6}, 6);
    check({1,3,5,6}, 7);
    check({1,3,5,6}, 2);
    check({1,3,5,6}, 0);
    check({1,4,6,7,8,9}, 6);


    return 0;
}