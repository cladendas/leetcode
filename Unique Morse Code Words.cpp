// 804. Unique Morse Code Words

#include "libraries.cpp"

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morce {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int result = 0;
        unordered_set<string> uw;

        string tmpStr = "";
        for (auto &&i : words)
        {
            for (auto &&j : i)
            {
                tmpStr += morce[j - 97];
            }
            uw.insert(tmpStr);
            tmpStr.clear();
        }
        
        return uw.size();
    }
};

void test() {
    Solution s;
    std::vector<string> vec{"gin","zen","gig","msg"};
    std::cout << s.uniqueMorseRepresentations(vec) << '\n';

    vec = {"a"};
    std::cout << s.uniqueMorseRepresentations(vec) << '\n';
}