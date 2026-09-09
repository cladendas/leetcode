// 344. Reverse String

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        std::reverse(s.rbegin(), s.rend());
    }
};

int main() {
    Solution s;

    std::vector<char> vec{'h','e','l','l','o'};

    s.reverseString(vec);

    for (auto &&i : vec)
    {
        std::cout << i;
    }
    
    std::cout << '\n';

    return 0;
}