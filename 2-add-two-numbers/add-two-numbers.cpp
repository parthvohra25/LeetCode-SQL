/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        int carry = 0;
        ListNode* head = nullptr;
        ListNode* temp = nullptr;
        
        while (head1 != nullptr || head2 != nullptr) {
            int num = carry;
            if (head1 != nullptr) {
                num += head1->val;
                head1 = head1->next;
            }
            if (head2 != nullptr) {
                num += head2->val;
                head2 = head2->next;
            }
            carry = num / 10;
            num = num % 10;
            
            ListNode* newNode = new ListNode(num);
            if (head == nullptr) {
                head = newNode;
                temp = newNode;
            } else {
                temp->next = newNode;
                temp = temp->next;
            }
        }
        
        if (carry != 0) {
            ListNode* newNode = new ListNode(carry);
            temp->next = newNode;
        }
        return head;
    }
};
