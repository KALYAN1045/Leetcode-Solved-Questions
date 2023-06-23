class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        //find cycle
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast){
                break;
            }
        }
        // Find the entrance to the cycle (which is the duplicate number)
        int p1 = nums[0];
        int p2 = slow;
        while(p1!=p2){
            p1 = nums[p1];
            p2 = nums[p2];
        }
        return p1;
    }
};