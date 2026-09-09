// 557. Reverse Words in a String III

#include <iostream>
#include <algorithm>

class Solution {
public:
    std::string reverseWords(std::string s) {
        auto start = s.begin();

        for (auto i = s.begin(); i != s.end(); ++i)
        {
            if (*i == ' ') {
                std::reverse(start, i);
                start = i + 1;
            } else if (i == s.end() - 1) {
                std::reverse(start, i + 1);
            }
        }
        return s;
    }
};

int main() {
    Solution s;

    std::cout << s.reverseWords("Let's take LeetCode contest") << '\n';
    std::cout << s.reverseWords("contest") << '\n';

    return 0;
}