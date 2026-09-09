// 14. Longest Common Prefix
#include <iostream>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.size() == 1) {
            return strs.front();
        } else if (strs.size() == 0) {
            return "";
        }
        std::string result = "";
        char tmpC;
        for (int i = 0;; i++)
        {
            tmpC = strs.front()[i];
            for (size_t j = 1; j < strs.size(); j++)
            {
                if (tmpC != strs[j][i] || i >= strs[j].size()) {
                    return result;
                }
            }
            result += tmpC;
        }
        return result;
    }
};

int main() {
    Solution s;

    std::vector<std::string> vec{"flower","flow","flight"};
    std::vector<std::string> vec1{"reflower","flow","flight"};
    std::vector<std::string> vec2{"flower","flower","flower","flower"};
    std::vector<std::string> vec3{"a","a","b"};
    std::vector<std::string> vec4{"aaa","aa","aaa"};
    std::cout << s.longestCommonPrefix(vec) << '\n';
    std::cout << s.longestCommonPrefix(vec1) << '\n';
    std::cout << s.longestCommonPrefix(vec2) << '\n';
    std::cout << s.longestCommonPrefix(vec3) << '\n';
    std::cout << s.longestCommonPrefix(vec4) << '\n';
    return 0;
}