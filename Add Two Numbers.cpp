#include <iostream>
#include <vector>

// 2. Add Two Numbers
/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    std::vector<int> getDigits(ListNode* l) {
        std::vector<int> digits;
        ListNode* tmpL = l;
        while(true) {
            digits.emplace_back(tmpL->val);

            if (tmpL->next == nullptr) {
                break;
            } else {
                tmpL = tmpL->next;
            }
        }
        
        return digits;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::vector<int> digitsL1 = getDigits(l1);
        std::vector<int> digitsL2 = getDigits(l2);

        ListNode* result_head = new ListNode();
        ListNode* result_current = result_head;

        int tmpSum = 0;
        bool isL_10 = false;

        int index = 0;
        while(true) {
            if (index < digitsL1.size() && index < digitsL2.size()) {
                tmpSum = digitsL1[index] + digitsL2[index];
            } else if (index >= digitsL1.size() && index < digitsL2.size()) {
                tmpSum = digitsL2[index];
            } else if (index < digitsL1.size() && index >= digitsL2.size()) {
                tmpSum = digitsL1[index];
            }

            if (isL_10) {
                isL_10 = false;
                tmpSum = tmpSum + 1;
            } 
            
            if (tmpSum >= 10) {
                tmpSum = tmpSum % 10;
                isL_10 = true;
            }

            result_current->val = tmpSum;
            index++;
            if (index >= digitsL1.size() && index >= digitsL2.size() && !isL_10) {
                break;
            }

            result_current->next = new ListNode();
            result_current = result_current->next;
            tmpSum = 0;
        }
        
        return result_head;
    }
};

void check(ListNode* l) {
    ListNode* tmpL = l;
    while(true) {
        std::cout << tmpL->val << ' ';

        if (tmpL->next == nullptr) {
            break;
        } else {
            tmpL = tmpL->next;
        }
    }
    std::cout << '\n';
}

int main() {
    ListNode l1_3(1);
    ListNode l1_4(0, &l1_3);
    // ListNode l1_4(0);
    ListNode l1_2(1, &l1_4);

    ListNode l2_4(8);
    ListNode l2_6(7, &l2_4);
    // ListNode l2_6(0);
    ListNode l2_5(5, &l2_6);

    Solution ss = Solution();
    auto result = ss.addTwoNumbers(&l1_4, &l2_6);

    check(result);

    return 0;
}