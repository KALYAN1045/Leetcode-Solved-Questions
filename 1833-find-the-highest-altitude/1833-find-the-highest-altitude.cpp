class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        if(gain.size() == 1 && gain[0] > 0) return gain[0];
        if(gain.size() == 1) return 0;
        int maxalt = 0;
        for(int i = 0; i < gain.size(); i++){
            sum += gain[i];
            maxalt = max(sum, maxalt);
        }
        return maxalt;
    }
};