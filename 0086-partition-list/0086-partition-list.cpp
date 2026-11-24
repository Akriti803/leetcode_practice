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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummybefore=new ListNode(-1);
        ListNode* dummyafter=new ListNode(-1);
        ListNode* before=dummybefore;
        ListNode* after=dummyafter;
        ListNode* temp=head;
        while(temp!=NULL){
           if(temp->val<x){
              before->next=temp;
              before=before->next;
           }
           else{
            after->next=temp;
            after=after->next;
           }
           temp=temp->next;
        }
        after->next=NULL;
        before->next=dummyafter->next;
        return dummybefore->next;
    }
};