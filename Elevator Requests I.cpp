// 4020. Elevator Requests I

#include "libraries.cpp"

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int result = requests.front();

        for (size_t i = 1; i < requests.size(); i++)
        {
            if (requests[i] > requests[i - 1]) {
                result += requests[i] - requests[i - 1];
            } else {
                result += requests[i - 1] - requests[i];
            }
        }
        return result;
    }
};

void test() {
    Solution s;

    std::vector<int> vec = {2,0,0};
    std::cout << s.elevatorRequests(5, vec) << '\n';
}