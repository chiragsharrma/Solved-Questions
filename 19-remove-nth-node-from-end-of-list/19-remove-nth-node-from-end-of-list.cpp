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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* end=head;
        int k=0;
        while(end){
            if(k<=n){
                k++;
            }else{
               temp=temp->next; 
            }
            end=end->next;
        }
        if(k==n)
        {
            return head->next;
        }
        temp->next=temp->next->next; 
        return head;
    }
};