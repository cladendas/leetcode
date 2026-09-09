// 13. Roman to Integer

#include <iostream>
class Solution {
public:
    int romanToInt(std::string s) {
        int result = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i + 1] == 'V' && s[i] == 'I') {
                result += 4;
                i++;
            } else if (s[i + 1] == 'X' && s[i] == 'I') {
                result += 9;
                i++;
            } else if (s[i + 1] == 'L' && s[i] == 'X') {
                result += 40;
                i++;
            } else if (s[i + 1] == 'C' && s[i] == 'X') {
                result += 90;
                i++;
            } else if (s[i + 1] == 'D' && s[i] == 'C') {
                result += 400;
                i++;
            } else if (s[i + 1] == 'M' && s[i] == 'C') {
                result += 900;
                i++;
            } else if (s[i] == 'I') {
                result += 1; 
            } else if (s[i] == 'V') {
                result += 5;
            } else if (s[i] == 'X') {
                result += 10;
            } else if (s[i] == 'L') {
                result += 50;
            } else if (s[i] == 'C') {
                result += 100;
            } else if (s[i] == 'D') {
                result += 500;
            } else if (s[i] == 'M') {
                result += 1000;
            }
        }

        return result;
    }
};

int main() {
    Solution s;
    std::cout << s.romanToInt("MCMXCIV") << '\n';

    return 0;
}

/*

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/
