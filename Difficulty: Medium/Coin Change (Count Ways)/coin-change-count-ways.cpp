class Solution {
  public:
  
    int find(vector<int>&nums,int target,int n ,int index,vector<vector<int>>&dp){
        if(target==0)return 1;
        if(index==n || target<0)return 0;
        
        if(dp[index][target]!=-1)return dp[index][target];
        
        int include = 0;
        if(target>=nums[index]){
           include =  find(nums,target-nums[index],n,index,dp);
        }
       int exclude= find(nums,target,n,index+1,dp);
       return dp[index][target]=include +exclude;
    }
  
    int count(vector<int>& coins, int sum) {
        int count=0;
        vector<vector<int>>dp(coins.size(),vector<int>(sum+1,-1));
        return  find(coins,sum,coins.size(),0,dp);
        
    }
};