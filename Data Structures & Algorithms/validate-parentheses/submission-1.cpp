class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x: s){
            if(st.empty() && (x=='}' || x==']' || x==')')){
                return false;
            }
            else{
                if(x=='[' || x=='{' || x=='('){
                    st.push(x);
                }
                else{
                    if(x==']' && st.top()=='['){
                        st.pop();
                    }
                    else if(x=='}' && st.top()=='{'){
                        st.pop();
                    }
                    else if(x==')' && st.top()=='('){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};
