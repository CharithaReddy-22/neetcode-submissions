class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1=0;
        int p2=numbers.size()-1;
        vector<int> ans={-1,-1};
        while(p1<p2){
            if(numbers[p1]+numbers[p2]<target){
                p1++;
            }
            else if(numbers[p1]+numbers[p2]>target){
                p2--;   
            }
            else{
                ans[0]=p1+1;
                ans[1]=p2+1;
                break;
            }
        }
        return ans;
    }
};
