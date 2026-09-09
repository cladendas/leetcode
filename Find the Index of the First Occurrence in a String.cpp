// 28. Find the Index of the First Occurrence in a String
#include <iostream>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        for (size_t i = 0; i < haystack.size() && i <= haystack.size() - needle.size(); i++)
        {
            if (haystack.substr(i, needle.size()) == needle) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution s;

    std::cout << __LINE__ << " - " << s.strStr("sqadbutswad", "sad") << '\n';
    std::cout << __LINE__ << " - " << s.strStr("abc", "c") << '\n';

    return 0;
}