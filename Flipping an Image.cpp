// 832. Flipping an Image

#include "libraries.cpp"

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        std::transform(image.begin(), image.end(), image.begin(),
            [](auto v){
                std::reverse(v.rbegin(), v.rend());

                std::transform(v.begin(), v.end(), v.begin(), [](auto& n) {
                    return n == 1 ? 0 : 1;
                });
                
                return v;
        });

        return image;
    }
};

void test() {
    Solution s;
    std::vector<vector<int>> vec{{1,1,0},{1,0,1},{0,0,0}};
    // std::cout << s.flipAndInvertImage(vec) << '\n';

    vec = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
    // std::cout << s.flipAndInvertImage(vec) << '\n';
}