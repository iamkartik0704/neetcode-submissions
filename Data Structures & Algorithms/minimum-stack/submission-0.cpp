// you can use a stack itself

class MinStack {
    private:
    stack<int>st;
    stack<int>mins;
public:
    MinStack() {}
    
    void push(int val) {
        st.push(val);
        if(mins.empty() || val<=mins.top()){
            mins.push(val);
        }
    }
    
    void pop() {
        if(st.top() == mins.top()){
            mins.pop();
        }
        st.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
     return mins.top();   
    }
};
