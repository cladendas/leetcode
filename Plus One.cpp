// 66. Plus One

#include "libraries.cpp"

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int tmp = 0;
        int ind = 0;

        digits.back() += 1;
        
        int dec = 0;

        for (int i = 0; i < digits.size(); i++)
        {
            ind = digits.size() - 1 - i;
            tmp = digits[ind];

            if (tmp > 9) {
                digits[ind] = 0;
                dec = 1;
            } else if (dec == 1 && tmp == 9) {
                digits[ind] = 0;
            } else if (dec == 1) {
                digits[ind] += dec;
                dec = 0;
            }
        }

        if (dec == 1) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};

void test() {
    Solution s;
    vector<int> vec = {9, 9, 9};
    // s.plusOne(vec);

    // for (auto &&i : s.plusOne(vec))
    // {
    //     PRINT(i)
    // }
    
    PRINT(' ')
    
    vec = {9};
    // s.plusOne(vec);
    for (auto &&i : s.plusOne(vec))
    {
        // PRINT(i)
    }

    PRINT(' ')
    vec = {3, 9};
    // s.plusOne(vec);
    for (auto &&i : s.plusOne(vec))
    {
        PRINT(i)
    }
}