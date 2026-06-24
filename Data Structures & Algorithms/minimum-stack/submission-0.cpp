class MinStack {
private:
stack<int> st;
stack<int> minst;
public:
    MinStack() {
    }
    void push(int val) {
        if(minst.empty()){
            minst.push(val);
        }
        else{
        if(minst.top()>val){
            minst.push(val);
        }
        else{
            minst.push(minst.top());
        }}
        st.push(val);
    }
    void pop() {
        minst.pop();
        st.pop();   
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
