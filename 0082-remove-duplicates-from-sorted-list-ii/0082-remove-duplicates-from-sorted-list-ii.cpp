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
    ListNode* deleteDuplicates(ListNode* head) {
       if(head==NULL){
        return head;
       }
       ListNode* temp=head;
       ListNode* dummy=new ListNode(0);
       ListNode* prev=dummy;
       dummy->next=head;
       while(temp!=NULL && temp->next!=NULL){
        if(temp->val==temp->next->val){
           int x=temp->val;
           while(temp!=NULL && temp->val==x){
            temp=temp->next;
           }
           prev->next=temp;
        }
        else{
            prev=temp;
            temp=temp->next;
        }
       }
   return dummy->next;
    }
};