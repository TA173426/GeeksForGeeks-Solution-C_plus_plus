class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        if(s.size()==1)return 1;
        int first = 0 ,second = s.size()-1;
        while(first<second){
            if(s[first]==s[second]){
                first++;
                second--;
            }
            else return 0;
        }
        return 1;
    }
};