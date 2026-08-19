class MinStack {
    stack<pair<int,int>>st;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push({value,value});
        }else{
            int mini_so_far=st.top().second;
            int new_minimum=min(value,mini_so_far);
            st.push({value,new_minimum});
        }
        
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
         return st.top().first;
        
    }
    
    int getMin() {
         return st.top().second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */