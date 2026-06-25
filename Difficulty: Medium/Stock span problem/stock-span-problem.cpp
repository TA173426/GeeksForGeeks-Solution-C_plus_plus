class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        stack<int>st;
        vector<int>ans(arr.size(),1);
        for(int i =0;i<arr.size();i++){
            if(st.empty()){
                st.push(i);
                continue;
            }
            if(arr[st.top()]<=arr[i]){
                ans[i]+=ans[st.top()];
                st.pop();
                i--;
            }
            else{
                st.push(i);
            }
            
        }
        return ans;
    }
};