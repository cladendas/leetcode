// 202. Happy Number

#include "libraries.cpp"

class Solution {
public:
    bool isHappy(int n) {
        if (n == 1 || n == 7) {
            return true;
        }
        
        if (n > 9) {
            int tmp = 0;
            while (n > 0) {
                tmp += std::pow(n % 10, 2);
                n /= 10;
            }

            return isHappy(tmp);
        }
        return false;
    }
};

void test() {
    Solution s;
    PRINT(s.isHappy(19));
    PRINT(s.isHappy(2));
    PRINT(s.isHappy(7));
    PRINT(s.isHappy(1111111));
    PRINT(s.isHappy(11));
}
