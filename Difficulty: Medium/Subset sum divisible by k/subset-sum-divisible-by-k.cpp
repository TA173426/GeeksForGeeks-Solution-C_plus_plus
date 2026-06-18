class Solution {
  public:
  
    bool find(vector<int>&a,vector<vector<int>>&dp ,int k ,int index , int n ,int rem){
       if(rem==0)return 1;
       if(index==n)return 0;
        if(dp[index][rem]!=-1)return dp[index][rem];
        bool exclude = find(a,dp,k,index+1,n,rem);
        if(exclude)return dp[index][rem]=true;
        bool include =find(a,dp,k,index+1,n,(rem+a[index])%k); 
        
        return dp[index][rem]=include ||exclude;
    
        
    }
  
    bool divisibleByK(vector<int>& arr, int k) {
        
        vector<vector<int>>dp(arr.size(),vector<int>(k+1,-1));
        return find(arr,dp,k,0,arr.size(),k);
        
    }
};