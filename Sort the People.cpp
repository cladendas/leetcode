// 2418. Sort the People

#include "libraries.cpp"

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> m;

        for (size_t i = 0; i < names.size(); i++)
        {
            m[heights[i]] = names[i];
        }

        std::vector<string> result;
        for (auto it = m.rbegin(); it != m.rend(); it++)
        {
            result.emplace_back(it->second);
        }
        
        return result;
    }
};

void test() {
    Solution s;
    std::vector<string> names{"Mary","John","Emma"};
    std::vector<int> heights{180,165,170};

    for (auto &&i : s.sortPeople(names, heights))
    {
        std::cout << i << ' ';
    }
}