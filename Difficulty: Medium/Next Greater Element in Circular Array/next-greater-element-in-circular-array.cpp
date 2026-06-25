class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
         vector<int>ans(arr.size(),-1);
         stack<int>st;
        int i =0;
       int  count=0;
        while(count!=2){
            if(i==arr.size()){i%=arr.size();count++;if(count==2)break;}
            if(st.empty()){
                st.push(i);
                i++;
                continue;
            }
            if(arr[st.top()]<arr[i]){
                ans[st.top()]=arr[i];
                st.pop();
            }
            else{
                st.push(i);
                i++;
            }
        }
        return ans;
    }
};