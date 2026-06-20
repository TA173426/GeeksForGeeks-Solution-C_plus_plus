class Solution {
  public:
  
    void find(vector<string>&ans,string &s,int n , int index){
        
        if(index==n){
            ans.push_back(s);
            return;
        }
        
        unordered_set<char>seen;
        
        for(int i =index;i<s.size();i++){
            if(seen.count(s[i]))continue;
            
            seen.insert(s[i]);
            swap(s[index],s[i]);
            find(ans,s,n,index+1);
            swap(s[index],s[i]);
        }
    }
  
    vector<string> findPermutation(string &s) {
        vector<string>ans;
        find(ans,s,s.size(),0);
        return ans;
    }
};
