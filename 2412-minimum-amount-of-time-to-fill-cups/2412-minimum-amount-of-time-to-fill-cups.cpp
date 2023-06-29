class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq(amount.begin(), amount.end());
        int time =0;
        while(pq.top() > 0){
            int num1 = pq.top(); pq.pop();
            int num2 = pq.top(); pq.pop();
            num1--;
            num2--;
            pq.push(num1); pq.push(num2);
            time++;
        }
        return time;
    }
};