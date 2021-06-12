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
    ListNode* swapNodes(ListNode* head, int k) {
        int m = getLenLinkedList(head);
        if (m==1 || m==0){
            return head;
        }
        ListNode* curr = head;
        ListNode* temp;
        ListNode* temp2;
        int n = 1;
        if (m==k){
            while (curr!=NULL){
                if (n==m){
                    int tempVal = curr->val;
                    curr->val = head->val;
                    head->val = tempVal;
                    break;
                }
                curr=curr->next;
                n++;
            }
        }
        else if (m!=k){
            while (curr!=NULL){
                if (n==k){
                    temp = curr;
                }
                if(m==k){
                    temp2 = curr;
                }
                curr = curr->next;
                n++;
                m--;
            }
            int swap = temp->val;
            temp->val = temp2->val;
            temp2->val = swap;
        }
        return head;
    }
    
    /*Get len linked list*/
    int getLenLinkedList(ListNode* head){
        int cont = 0;
        ListNode* temp = head;
        while (temp!=NULL){
            temp=temp->next;
            cont++;
        }
        return cont;
    }
};