// User function Template for C++

class Solution {
  public:
  
    string convert(string&s,int n ){
        if(n<0)return s;
        else{
            if(s[n]-'a'>=0);
            else s[n]= static_cast<char>(s[n]+32);
            return convert(s,n-1);
        }
    }
    
    string toLower(string& s) {
        return convert(s,s.size()-1);
        
    }
};