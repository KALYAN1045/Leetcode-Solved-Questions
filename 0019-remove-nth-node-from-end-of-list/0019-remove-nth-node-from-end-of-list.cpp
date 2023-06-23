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
        //get no.of elements
        int no = 0;
        ListNode* temp = head;
        if(head == NULL) return head;
        while(temp != NULL){
            no++;
            temp = temp->next;
        }
        //go to the pos
        if(no == n){
            head = head->next;
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        int cnt = 1;
        while(cnt != no - (n - 1)){
            cnt++;
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        return head;
    }
};