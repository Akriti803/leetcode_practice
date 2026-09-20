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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextt=NULL;
        while(curr!=NULL){
           nextt=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nextt;

        }
        head=prev;
        return head;
    }
    bool isPalindrome(ListNode* head){
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* newhead=reverseList(slow->next);
        ListNode* first=head;
        ListNode* second=newhead;
        while(second!=NULL){
            if(first->val!=second->val){
                reverseList(newhead);//ll ko uski original state me la dena chahiye humesha ,interviewer bhi khush rehta hai
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverseList(newhead);
        return true;
    }
};