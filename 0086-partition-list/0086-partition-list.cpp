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
        ListNode*left = new ListNode(0);
        ListNode*ltail = left;
        ListNode*right = new ListNode(0);
        ListNode*rtail = right;
        ListNode*temp = head;
        while(temp != NULL){
            if(temp->val < x){
                ltail->next= new ListNode(temp->val);
                ltail = ltail->next;
            }
            else{
                rtail->next = new ListNode(temp->val);
                rtail = rtail->next;
            }
            temp = temp->next;
        }
        ltail->next = right->next;
        return left->next;    
    }
};