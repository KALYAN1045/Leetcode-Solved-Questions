class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        
        // If the size of the input vector is 2, the longest arithmetic sequence
        // will always have a length of 2. So, return 2 directly.
        if (n == 2) return 2;
        
        // Create a 3D vector 'seq' to store the lengths of arithmetic sequences.
        // The dimensions of the vector are:
        // - First dimension: 2 (0 for negative differences, 1 for positive or zero differences)
        // - Second dimension: n (to represent elements of 'nums' up to the current index)
        // - Third dimension: 501 (to accommodate the range of differences from -500 to 500)
        // Initialize all values to 1 since the minimum length of an arithmetic sequence is 2.
        vector<vector<vector<int>>> seq(2, vector<vector<int>>(n, vector<int>(501, 1)));
        
        int ans = 0; // Variable to store the maximum length of an arithmetic sequence
        
        // Iterate through each element of 'nums'
        for(int i = 0; i < n; i++) {
            // Iterate through all previous elements of 'nums'
            for(int j = 0; j < i; j++) {
                int dif = nums[i] - nums[j]; // Difference between the current and previous element
                int positive = dif >= 0 ? 1 : 0; // Indicator for positive or zero difference
                
                dif = abs(dif); // Take the absolute value of the difference
                
                // Increment the length of the arithmetic sequence by 1
                // using the previous length of the sequence for the same difference
                seq[positive][i][dif] = seq[positive][j][dif] + 1;
                
                // Update the maximum length of the arithmetic sequence if necessary
                ans = max(ans, seq[positive][i][dif]);
            }
        }
        
        return ans; // Return the maximum length of the arithmetic sequence
    }
};
