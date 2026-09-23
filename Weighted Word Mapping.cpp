// 3838. Weighted Word Mapping

#include "libraries.cpp"

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        std::string result = "";
        int tmpC = 0;
        for (auto &&i : words)
        {
            for (size_t j = 0; j < i.size(); j++)
            {
                tmpC += weights[i[j] - 'a'];
            }
            result += ('z' - (tmpC % 26));
            tmpC = 0;
        }
        return result;
    }
};

void test() {
    Solution s;

    std::vector<std::string> words {"abcd","def","xyz"}; 
    // std::vector<std::string> words {"abcd"}; 
    // std::vector<std::string> words {"zz"}; 
    std::vector<int> weights {5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2};
    std::string result = s.mapWordWeights(words, weights);
    std::cout << result << '\n';

}