class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        if(arr.size()==1)return arr;
        // code here
         stack<int> st;
         vector<int>ans;
         for(int a :arr){
             if(st.empty()){
                 st.push(a);
                 continue;
             }
             if(st.top()<0 && a>=0)st.pop();
             else if(st.top()>=0 && a<0)st.pop();
             else st.push(a);
         }
         while(!st.empty()){
            ans.push_back(st.top());
             st.pop();
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};