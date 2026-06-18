class Solution {
  public:
    
    int find(vector<vector<int>>&dp , vector<int>&arr,int target,int index,int n){
        
        if(index==n){
            if(target==0)return 1;
            else return 0;
        }
        
        if(dp[index][target]!=-1)return dp[index][target];
        
        int exclude = find(dp,arr,target,index+1,n);
        
        int include =0;
        
        if(arr[index]<=target)include= find(dp,arr,target-arr[index],index+1,n);
        
        dp[index][target]= include +exclude;
        return dp[index][target];
        
    }
    
    int perfectSum(vector<int>& arr, int target) {
        
        vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
        return find(dp,arr,target,0,arr.size());
        
    }
};