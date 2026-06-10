class Solution {
  public:
    vector<int> vec(string s){
        vector<int> n;
        for(int i=0;i<s.size();i++){
            n.push_back(s[i]-'0');
        }
        return n;
    }
  
    vector<int> factorial(int n,string s="1") {
        // code here
    if(n<=1)return vec(s);
    else{
        int prod= 0;
        int carry = 0;
        int digit = 0;
        int sum =0;
        string s1="";
        for(int i=s.size()-1;i>=0;i--){
            int temp = s[i]-'0';
            prod = temp*n;
            sum= prod+carry;
            digit = sum%10;
            s1 =to_string(digit)+s1;
            carry= sum/10;
        }
        if(carry)s1=to_string(carry)+s1;
        return factorial(n-1,s1);
    }
    }
};