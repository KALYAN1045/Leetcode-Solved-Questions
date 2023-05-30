class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        int l = 0;
        int r = n.size();
        if(t > n[r - 1]) return r;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(n[mid] == t) return mid;
            if(n[mid] > t) r = mid - 1;
            if(n[mid] < t) l = mid + 1;
        }
        return l;
    }
};