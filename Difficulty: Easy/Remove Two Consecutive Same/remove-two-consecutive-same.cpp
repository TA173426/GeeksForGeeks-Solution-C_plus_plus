class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        if(arr.size()==1)return 1;
        // code here
        stack<string>st;
        for(string a:arr){
            if(st.empty()){st.push(a);continue;}
            if(st.top()==a)st.pop();
            else st.push(a);
        }
        return st.size();
    }
};