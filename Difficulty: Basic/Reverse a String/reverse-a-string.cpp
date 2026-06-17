// User function Template for C++
class Solution {
  public:
  
    string reverse(string &s,int second,int first=0){
        if(first>=second)return s;
        else{
            swap(s[first],s[second]);
            return reverse(s,second-1,first+1);
        }
    }
    
    string reverseString(string& s) {
        if(s.size()==1)return s;
       return  reverse(s,s.size()-1);
        
    }
};
