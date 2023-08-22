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
private:
    ListNode* recRev(ListNode* curr, ListNode* prev) {
    if(curr==nullptr) return prev;

    ListNode* next = curr->next;
    curr->next = prev;
    return recRev(next,curr);
}
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;

            // Reverse the first half of the linked list
            ListNode* temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }

        // If the linked list has odd elements, move slow one step ahead
        if (fast != nullptr) {
            slow = slow->next;
        }

        while (prev != nullptr && slow != nullptr) {
            if (prev->val != slow->val) {
                return false; // Not a palindrome
            }
            prev = prev->next;
            slow = slow->next;
        }
        return true;
    }
};