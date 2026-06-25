class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int>ans(arr.size(),-1);
        stack<int>st;
        for(int i =0;i<arr.size();i++){
             if(st.empty()){
                 st.push(i);
                 continue;
             }
             if(arr[st.top()]<arr[i]){
                 ans[st.top()]=arr[i];
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