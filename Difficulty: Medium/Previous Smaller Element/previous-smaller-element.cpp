class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        vector<int>ans(arr.size(),-1);
        stack<int> st;
        for(int i =arr.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
                continue;
            }
            if(arr[st.top()]>arr[i]){
                ans[st.top()]=arr[i];
                st.pop();
                i++;
                continue;
            }
            else{
                st.push(i);
            }
            
        }
        return ans;
        
    }
};