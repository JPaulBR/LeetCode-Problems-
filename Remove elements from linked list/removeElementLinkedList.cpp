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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* temp;
        while (curr!=NULL){
            if (curr->val==val){
                if (prev==NULL){
                    temp=curr->next;
                    curr=NULL;
                    head=temp;
                    curr = head;
                }
                else{
                    temp= curr->next;
                    prev->next=temp;
                    curr = NULL;
                    curr = temp;
                }
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
    
};