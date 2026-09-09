// 9. Palindrome Number
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0 && x <= 9) {
            return true;
        } else if (x < 0 || (x % 10 == 0)) {
            return false;
        }

        int reverseNum = 0;
        int tmpX = x;
        while(tmpX != 0) {
            reverseNum = reverseNum * 10 + tmpX % 10;
            tmpX /= 10;
        }

        return reverseNum == x;
    }
};

int main() {
    Solution s;

    std::cout << s.isPalindrome(1234567899) << '\n';

    return 0;
}