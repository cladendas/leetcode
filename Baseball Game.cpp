// 682. Baseball Game

#include <iostream>
#include <vector>
#include <numeric> 

class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::vector<int> vec;
        for (size_t i = 0; i < operations.size(); i++)
        {
            if (operations[i][0] == 'D') {
                vec.emplace_back(vec.back() * 2);
            } else if (operations[i][0] == 'C') {
                vec.pop_back();
            } else if (operations[i][0] == '+') {
                vec.emplace_back(vec.back() + (vec[vec.size() - 2]));
            } else {
                vec.emplace_back(std::stoi(operations[i]));
            }
        }

        return std::accumulate(vec.begin(), vec.end(), 0);
    }
};

void test() {
    Solution s;

    std::vector<std::string> vec{"5","2","C","D","+"};
    int result = s.calPoints(vec);
    std::cout << s.calPoints(vec) << '\n';

    vec = {"5","-2","4","C","D","9","+","+"};
    result = s.calPoints(vec);
    std::cout << result << '\n';

    vec = {"1","C","-62","-45","-68"};
    result = s.calPoints(vec);
    std::cout << result << '\n';
}