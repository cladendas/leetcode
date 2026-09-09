// 3340. Check Balanced String

#include "libraries.cpp"

class Solution {
public:
    bool isBalanced(string& num) {
        int result = 0;
        bool isOdd = false;

        for (auto &&i : num)
        {
            if (isOdd) {
                result += i - '0';
            } else {
                result -= i - '0';
            }
            isOdd = !isOdd;
        }
        return result == 0;
    }
};

void test() {
    Solution s;

    std::string str = "241239";
    std::cout << s.isBalanced(str);

}