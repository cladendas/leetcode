// 1636. Sort Array by Increasing Frequency

#include "libraries.cpp"

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> m;

        for (auto &&i : nums)
        {
            m[i]++;
        }

        std::vector<std::pair<int, int>> resultPairs;

        for (auto &&i : m)
        {
            resultPairs.emplace_back(i);
        }
        
        std::sort(resultPairs.begin(), resultPairs.end(), [](auto a, auto b){
            return a.second == b.second ? a.first > b.first : a.second < b.second;
        });

        std::vector<int> result;
        for (auto &&i : resultPairs)
        {
            for (size_t j = 0; j < i.second; j++)
            {
                result.emplace_back(i.first);
            }
        }
        
        return result;
    }
};

void test() {
    Solution s;
    std::vector<int> vec{1,1,2,2,2,3};

    for (auto &&i : s.frequencySort(vec))
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    // vec = {2,3,1,3,2};

    // for (auto &&i : s.frequencySort(vec))
    // {
    //     std::cout << i << ' ';
    // }
    // std::cout << '\n';
}