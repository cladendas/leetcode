// 867. Transpose Matrix

#include "libraries.cpp"

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix.front().size();
        vector<vector<int>> result(cols, vector<int>(rows));
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};

void test() {
    Solution s;
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};

    s.transpose(vec);
}