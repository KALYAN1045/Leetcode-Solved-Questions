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
    int getlen(ListNode* head){
        int cnt = 0;
        while(head != NULL) {
            cnt++;
            head = head->next;
        }
        return cnt;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int nth = getlen(head) - n;
        ListNode* temp = head;
        if (nth == 0) {
            head = head->next;
            return head;
        }
        while(temp != NULL && nth > 1){
            temp = temp->next;
            nth--;
        }
        if (temp != NULL && temp->next != NULL){
            temp->next = temp->next->next;
        }
        return head;
    }
};