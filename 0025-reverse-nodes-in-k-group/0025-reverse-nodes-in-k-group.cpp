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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // if(head == NULL || head->next == NULL) return head;
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nex=NULL;
        for(int i = 0; i < k; i++){
            if(curr == NULL) return head;
            curr=curr->next;
        }
        curr = head;
        int cnt = k;
        while(cnt-- && curr){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};