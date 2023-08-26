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
        if(head == NULL) return head;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* next = curr->next;
            while(next != NULL && next->val == curr->val) next = next->next;
            curr->next = next;
            curr=next;
        }
        return head;
    }
};