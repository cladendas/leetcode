// 20. Valid Parentheses
#include <iostream>

class Solution {
public:
    bool isValid(std::string s) {
        if (s.size() == 1) {
            return false;
        }

        std::string stack = "";
        stack.reserve(s.size());

        char top = ' ';

        for (auto &&c : s)
        {
            if (c == '(' || c == '{' || c == '[') {
                stack.push_back(c);
            } else {
                if (stack.empty()) {
                    return false;
                }

                top = stack.back();
                if ((c == ')' && top != '(')
                    || (c == '}' && top != '{')
                    || (c == ']' && top != '[')
                ) {
                    return false;
                }
                stack.pop_back();
            }
        }
        
        return stack.empty();
    }
};

int main() {
    Solution s;

    std::cout << s.isValid("()") << '\n';
    std::cout << s.isValid("()[]{}") << '\n';
    std::cout << s.isValid("(]") << '\n';
    std::cout << s.isValid("([])") << '\n';
    std::cout << s.isValid("){") << '\n';
    
    return 0;
}