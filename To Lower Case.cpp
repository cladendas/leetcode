// 709. To Lower Case

#include <iostream>
#include <algorithm>
#include <cctype>


class Solution {
public:
    std::string toLowerCase(std::string s) {
        std::transform(s.begin(), s.end(), s.begin(), 
            [](unsigned char c) {
                return std::tolower(c);
            });

        return s;
    }
};

void test() {
    Solution s;
    std::cout << s.toLowerCase("Hello") << '\n';
}