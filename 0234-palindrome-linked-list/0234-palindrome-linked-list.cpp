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
    ListNode* reverse_list(ListNode* head){
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(head){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return 1;
        ListNode* slow = head;
        ListNode* fast = head;
        //finding middle
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        //reverse_list of second half
        slow->next = reverse_list(slow->next);
        slow = slow->next;
        ListNode* curr=head;
        while(slow){
            if(curr->val != slow->val) return 0;
            slow = slow->next;
            curr = curr->next;
        }
        return 1;
    }
};