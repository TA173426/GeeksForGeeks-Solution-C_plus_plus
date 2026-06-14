class Solution {
  public:
    int getLPSLength(string &s) {
        
        if(s.size()==1)return 0;
        vector<int> count(s.size(),0);
        int pre =0,suf =1;
        while(suf<s.size()){
            if(s[pre]==s[suf]){
                count[suf]=pre+1;
                suf++;
                pre++;
            }
            else{
                if(pre==0){
                    count[suf]=0;
                    suf++;
                }
                else{
                    pre = count[pre-1];
                }
            }
        }
        return count[s.size()-1];
        
    }
};