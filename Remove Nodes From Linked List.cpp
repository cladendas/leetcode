// 2487. Remove Nodes From Linked List

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
    ListNode* removeNodes(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        if (head->val < head->next->val) {
            return removeNodes(head->next);
        } else {
            head->next = removeNodes(head->next);

            if (head->val < head->next->val) {
                return head->next;
            }

            return head;
        }
    }

    // ListNode* removeNodes(ListNode* head) {
    //     if (!head) return NULL;
    //     head->next = removeNodes(head->next);
    //     return head->next && head->val < head->next->val ?  head->next : head;
    // }
};

void test() {

}