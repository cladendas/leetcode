// 1823. Find the Winner of the Circular Game

#include "libraries.cpp"

class Solution {
public:
    int findTheWinner(int n, int k) {
        int result = 0;
        for (int i = 2; i <= n; i++) {
            result = (result + k) % i;
        }
        return result + 1;
    }
};

void test() {
    unordered_set<int> s;
}