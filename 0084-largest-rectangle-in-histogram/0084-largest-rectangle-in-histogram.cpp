class Solution {
private:
    vector<int> nextSmaller(vector<int>h, int n){
        vector<int>v(n);
        stack<int>s;
        s.push(-1);
        for(int i = n-1; i >= 0; i--){
            while(s.top() != -1 && h[s.top()] >= h[i]){
                s.pop();
            }
            v[i] = s.top();
            s.push(i);
        }
        return v;
    }

    vector<int> prevSmaller(vector<int>h, int n){
        vector<int>v(n);
        stack<int>s;
        s.push(-1);
        for(int i = 0; i < n; i++){
            while(s.top() != -1 && h[s.top()] >= h[i]){
                s.pop();
            }
            v[i] = s.top();
            s.push(i);
        }
        return v;
    }

public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();

        vector<int> next(n);
        next = nextSmaller(h, n);

        vector<int>prev(n);
        prev = prevSmaller(h, n);

        int area;
        for(int i = 0; i < n; i++){
            int l = h[i];
            if(next[i] == -1) next[i] = n;
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }
};