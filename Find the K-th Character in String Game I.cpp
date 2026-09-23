// 3304. Find the K-th Character in String Game I

#include "libraries.cpp"

class Solution {
public:
    char kthCharacter(int k) {
        std::string str = "a";
        int ind = 0;

        std::string tmpStr = "";
        while (str.size() < k) {
            for (int i = 0; i < str.size(); i++)
            {
                tmpStr += str[i] + 1;
            }
            str += tmpStr;
            tmpStr.clear();
        }

        return str[k - 1];
    }
};

void test() {
    Solution s;
    PRINT(s.kthCharacter(5));
    // PRINT(s.kthCharacter(10));
}

// abbcbccd