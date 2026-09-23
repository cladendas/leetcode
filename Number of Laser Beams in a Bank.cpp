// 2125. Number of Laser Beams in a Bank

#include "libraries.cpp"

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int result = 0;
        int prevLine = 0;
        int curLine = 0;
        for (int i = 1; i < bank.size(); i++) {
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1') {
                    curLine++;
                }
                if (i == 1 && bank[i - 1][j] == '1') {
                    prevLine++;
                }
            }
            if (curLine != 0) {
                result += prevLine * curLine;
                prevLine = curLine;
                curLine = 0;
            }
        }
        return result;
    }
};

void test() {

}