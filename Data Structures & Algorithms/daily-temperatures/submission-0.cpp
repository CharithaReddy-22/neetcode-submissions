class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> res(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            while (!st.empty() && temperatures[st.top()]<temperatures[i]){
                int popped_idx=st.top();
                st.pop();
                res[popped_idx]=i-popped_idx;
            }
            st.push(i);
        }
        return res;
    }
};
