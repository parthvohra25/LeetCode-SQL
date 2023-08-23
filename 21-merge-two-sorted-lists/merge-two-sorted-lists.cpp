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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //base case
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }

        //make a dummy node
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        //initalize dummy node with smallest element
        if(list1->val<list2->val){
            temp=list1;
            list1=list1->next;
        }
        else{
            temp=list2;
            list2=list2->next;
        }
        dummy=temp;
        //add element into dummy node untill any of the list reached NULL
        while(list1 && list2){
            if(list1->val<list2->val){
            temp->next=list1;
            list1=list1->next;
            }
            else{
            temp->next=list2;
            list2=list2->next;
            }
            temp=temp->next;

        }
        //left element if in any list
        if(list1){
            temp->next=list1;
        }
        if(list2){
            temp->next=list2;
        }
        return dummy;
    }
};