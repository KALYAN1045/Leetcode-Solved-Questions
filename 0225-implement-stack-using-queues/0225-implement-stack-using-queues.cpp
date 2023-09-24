class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }

    void push(int x) {
        int n = q.size();
        q.push(x);
        while(n--){
            int num = q.front();
            q.pop();
            q.push(num);
        }
    }
    
    int pop() {
        if(!q.empty()){
            int res = q.front();
            q.pop();
            return res;
        }
        return -1;
    }
    
    int top() {
        if(!q.empty()) return q.front();
        return -1;
    }
    
    bool empty() {
        if(!q.empty()) return 0;
        else return 1;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */