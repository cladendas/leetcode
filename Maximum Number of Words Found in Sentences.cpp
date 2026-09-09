// 2114. Maximum Number of Words Found in Sentences

#include "libraries.cpp"

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result = 0;
        int tmpResult = 1;
        for (auto &&i : sentences)
        {
            for (auto &&j : i)
            {
                if (j == ' ') {
                    tmpResult++;
                } 
            }
            if (tmpResult > result) {
                result = tmpResult;
            }
            tmpResult = 1;
        }
        return result;
    }
};

void test() {


}