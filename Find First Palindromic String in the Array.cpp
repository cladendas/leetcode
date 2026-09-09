// 2108. Find First Palindromic String in the Array

#include "libraries.cpp"

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        std::string tmpStr = "";
        for (auto &&i : words)
        {
            tmpStr = i;
            std::reverse(i.begin(), i.end());

            if (tmpStr == i) {
                return tmpStr;
            }
        }
        return "";
    }
};

void test() {
    Solution s;
}