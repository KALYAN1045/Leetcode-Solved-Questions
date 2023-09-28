/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        unordered_map<ListNode*,bool>mp;
        while(a){
            mp[a] = 1;
            a = a->next;
        }
        while(b){
            if(mp[b]){
                return b;
            }
            b = b->next;
        }
        return 0;
    }
};