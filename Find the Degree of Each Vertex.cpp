// 3898. Find the Degree of Each Vertex

#include "libraries.cpp"

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        std::vector<int> result(matrix.size());
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                result[j] += matrix[i][j];
            }
        }
        return result;
    }
};

void test() {
    Solution s;

    vector<vector<int>> vec = {{0,1,1},{1,0,1},{1,1,0}};
    for (auto &&i : s.findDegrees(vec))
    {
        std::cout << i << ' ';
    }
}