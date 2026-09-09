// 21. Merge Two Sorted Lists

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* current = head;

        auto save = [&](int val) {
            current->next = new ListNode();
            current = current->next;
            current->val = val;
        };

        while(true) {
            if (list1 == nullptr && list2 == nullptr) {
                break;
            }

            if (list1 != nullptr && list2 != nullptr) {
                if (list1->val < list2->val) {
                    save(list1->val);
    
                    list1 = list1->next;
                } else {
                    save(list2->val);
    
                    list2 = list2->next;
                }
            } else if (list1 != nullptr && list2 == nullptr) {
                save(list1->val);

                list1 = list1->next;
            } else if (list2 != nullptr && list1 == nullptr) {
                save(list2->val);

                list2 = list2->next;
            }

        }

        return head->next;
    }
};

int main() {

    return 0;
}