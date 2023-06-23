class Solution {
public:
int removeDuplicates(vector<int>& nums) {
    int j = 0;
    int n = nums.size();
    for(int i = j+1; i < n; i++){
        if(nums[j] != nums[i]){
            j++;
            nums[j] = nums[i];
        }
    }   
    return j+1;
}
};