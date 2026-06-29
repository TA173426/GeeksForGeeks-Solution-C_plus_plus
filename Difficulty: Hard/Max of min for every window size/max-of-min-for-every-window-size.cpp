class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        if(arr.size()==1)return arr;
        vector<int>ans(arr.size(),0);
        stack<int>st;
        for(int i =0;i<=arr.size();i++){
            int current = (i==arr.size())?0:arr[i];
            while(!st.empty() && arr[st.top()]>current){
                int index = st.top();
                st.pop();
                int width= st.empty()?i:(i-st.top()-1);
                if(ans[width-1]<arr[index])ans[width-1]=arr[index];
            }
            st.push(i);
        }
        
        for(int i =arr.size()-2;i>=0;i--){
            if(ans[i]<ans[i+1])ans[i]=ans[i+1];
        }
        
        return ans;
    }
};