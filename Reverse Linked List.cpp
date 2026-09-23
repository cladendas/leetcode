// 206. Reverse Linked List

#include "libraries.cpp"


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return head;
        }

        std::vector<ListNode*> vec{head};
        vec.reserve(5000);
        ListNode* tmpNode = head->next;

        while(tmpNode) {
            vec.push_back(tmpNode);
            tmpNode = tmpNode->next;
        }

        vec[0]->next = nullptr;
        for (int i = 0; i < vec.size() - 1; i++) {
            vec[i + 1]->next = vec[i];
        }

        return vec.back();
    }
};

void test() {
    Solution s;
    ListNode* n;
    s.reverseList(n);

}