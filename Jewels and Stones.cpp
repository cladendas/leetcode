// 771. Jewels and Stones

#include "libraries.cpp"


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result = 0;

        for (auto &&i : jewels)
        {
            result += count(stones.begin(), stones.end(), i);
        }
        
        return result;
    }
};

void test() {
    Solution s;
    std::cout << s.numJewelsInStones("aA", "aAAbbbb") << '\n';
    std::cout << s.numJewelsInStones("z", "ZZ") << '\n';
}