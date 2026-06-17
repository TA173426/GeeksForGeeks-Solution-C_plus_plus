class Solution {
  public:
  
    void sums(vector<int>& ans,int sum,int index,int n,vector<int>&nums){
        if(index==n){
            ans.push_back(sum);
            return ;
            }
       
            sums(ans,sum,index+1,n,nums);
            sum+=nums[index];
            sums(ans,sum,index+1,n,nums);
            
            sum-=nums[index];
           
        
    }
    
    vector<int> subsetSums(vector<int>& arr) {
    vector<int>ans;
     int sum =0;
        sums(ans,sum,0,arr.size(),arr);
        
        return ans;
        
    }
};