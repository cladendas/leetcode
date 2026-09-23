// 155. Min Stack

#include "libraries.cpp"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class MinStack {
    std::vector<std::pair<int, int>> stack;
public:
    MinStack() {
        stack.reserve(1000);
    }
    
    void push(int value) noexcept {
        if (stack.empty()) {
            stack.push_back({value, value});
        } else {
            int tmpMinVal = stack.back().second;
            stack.push_back({value, (value > tmpMinVal ? tmpMinVal : value)});
        }
    }
    
    void pop() noexcept {
        stack.pop_back();
    }
    
    int top() const noexcept {
        return stack.back().first;
    }
    
    int getMin() const noexcept {
        return stack.back().second;
    }
};

void test() {
    MinStack* ms = new MinStack();
    ms->push(-2);
    // PRINT(ms->getMin())
    ms->push(0);
    // PRINT(ms->getMin())
    ms->push(-1);
    PRINT(ms->getMin())
    PRINT(ms->top())
    ms->pop();
    PRINT(ms->getMin())
}

// Input
// ["MinStack","push","push","push","getMin","top","pop","getMin"]
// [[],[-2],[0],[-1],[],[],[],[]]

// Output
// [null,null,null,null,-2,-1,null,-2]