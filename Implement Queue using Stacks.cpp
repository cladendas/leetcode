// 232. Implement Queue using Stacks

#include "libraries.cpp"

class MyQueue {
    std::stack<int> sIn;
    std::stack<int> sOut;

    void rebuild(std::stack<int>& s1, std::stack<int>& s2) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

    int getValue(bool type) {
        if (!sIn.empty()) {
            rebuild(sIn, sOut);
            return getValue(type);
        } else if (!sOut.empty()) {
            int tmp = sOut.top();
            
            if (type) {
                sOut.pop();
            }
            return tmp;
        } else {
            return -1;
        }
    }

public:
    MyQueue(){}
    
    void push(int x) {
        rebuild(sOut, sIn);
        sIn.push(x);
    }
    
    int pop() {
        return getValue(true);
    }
    
    int peek() {
        return getValue(false);
    }
    
    bool empty() {
        return sIn.empty() && sOut.empty();
    }
};

void test() {
    MyQueue myQueue = MyQueue();
    myQueue.push(1); // queue is: [1]
    myQueue.push(2); // queue is: [1]
    myQueue.push(3); // queue is: [1]
    myQueue.push(4); // queue is: [1]
    std::cout << __LINE__ << " - " << myQueue.pop() << '\n'; // return 1, queue is [2]
    myQueue.push(5); // queue is: [1]
    std::cout << __LINE__ << " - " << myQueue.pop() << '\n'; // return 1, queue is [2]
    std::cout << __LINE__ << " - " << myQueue.pop() << '\n'; // return 1, queue is [2]
    std::cout << __LINE__ << " - " << myQueue.pop() << '\n'; // return 1, queue is [2]
    std::cout << __LINE__ << " - " << myQueue.pop() << '\n'; // return 1, queue is [2]
    // myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
    // std::cout << __LINE__ << " - " << myQueue.peek() << '\n'; // return 1
    std::cout << __LINE__ << " - " << myQueue.empty() << '\n'; // return false

    // ["MyQueue","push","push","push","push","pop","push","pop","pop","pop","pop"]
    // [[],[1],[2],[3],[4],[],[5],[],[],[],[]]
    // [null,null,null,null,null,1,null,2,3,4,5]
}