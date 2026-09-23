// 3783. Mirror Distance of an Integer

#include "libraries.cpp"

class Solution {
public:
    int mirrorDistance(int n) {
        std::string num = std::to_string(n);
        std::string reverseNum = "";
        std::reverse(num.rbegin(), num.rend());

        return (std::abs(n - std::stoi(num)));
    }
};

void test() {
    Solution s;

    std::cout << s.mirrorDistance(7);

}