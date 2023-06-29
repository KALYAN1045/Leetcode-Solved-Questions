class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> minh;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j  < n; j++){
                minh.push((nums[i]-1) * (nums[j]-1));
                if(minh.size() > 1) minh.pop();
            }
        }
        return minh.top();        
    }
};