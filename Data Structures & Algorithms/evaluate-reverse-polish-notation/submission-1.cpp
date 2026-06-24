class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(auto x: tokens){
            if(x=="*" || x=="+"|| x=="-" || x=="/"){
                string s1=st.top();
                int n1=stoi(s1);
                st.pop();
                string s2=st.top();
                int n2=stoi(s2);
                st.pop();
                if(x=="*"){
                    st.push(to_string(n1*n2));
                }
                else if(x=="+"){
                    st.push(to_string(n1+n2));
                }
                else if(x=="-"){
                    st.push(to_string(n2-n1));
                }
                else if(x=="/"){
                    st.push(to_string(n2/n1));
                }
            }
            else{
                st.push(x);
            }
        }
        return stoi(st.top());
    }
};
