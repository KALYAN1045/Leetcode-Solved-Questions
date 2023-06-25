class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n = skill.size();
        int lo = 0;
        int hi = n - 1;
        long long s = skill[n-1] + skill[0];
        long long ans = 0;
        while(lo < hi){
            int skills = skill[lo] + skill[hi];
            if(skills == s){
                ans += skill[lo] * skill[hi];
            }
            else if(skills != s) return -1;
            lo++;
            hi--;
        }
        return ans;
    }
};