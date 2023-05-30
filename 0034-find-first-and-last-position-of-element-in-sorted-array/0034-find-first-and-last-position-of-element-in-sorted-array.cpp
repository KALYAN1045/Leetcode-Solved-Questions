class Solution {
public:
    int firstoccurance(vector<int> n, int t){
        int l = 0;
        int r = n.size() - 1;
        int res = -1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(n[mid] == t){
                res = mid;
                r = mid - 1;
            }
            if(n[mid] > t) r = mid - 1;
            if(n[mid] < t) l = mid + 1;
        }
        return res;
    }
    int lastoccurance(vector<int> n, int t){
        int l = 0;
        int r = n.size() - 1;
        int res = -1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(n[mid] == t){
                res = mid;
                l = mid + 1;
            }
            if(n[mid] > t) r = mid - 1;
            if(n[mid] < t) l = mid + 1;
        }
        return res;
    }

    vector<int> searchRange(vector<int>& n, int t) {
        vector<int>ans;
        int firstocc = firstoccurance(n, t);
        int lastocc = lastoccurance(n, t);
        ans.push_back(firstocc);
        ans.push_back(lastocc);
        return ans;
    }
};