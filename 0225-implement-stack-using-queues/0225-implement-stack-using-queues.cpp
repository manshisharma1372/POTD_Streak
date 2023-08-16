class MyStack {
public:
    
    //SINGLE QUEUE SOLN
    
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        
        q.push(x);
        
        for(int i=0;i<q.size()-1;i++){
            
            int elm=q.front();
            q.pop();
            q.push(elm);
        }
    }
    
    int pop() {
        
        int elm=q.front();
        q.pop();
        return elm;
    }
    
    int top() {
        
        return q.front();
        
    }
    
    bool empty() {
        return q.empty();
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