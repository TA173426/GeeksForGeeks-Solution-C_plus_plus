class Solution {
  public:
    vector<int> EqualSum(vector<int> arr) {
        // Complete the function
        long long totalSum = 0;
        for(int i=0;i<arr.size();i++){
            totalSum+=arr[i];
        }
        long long leftSum =0;
        
        int min = INT_MAX,index=0,x=0;
        int pos = 0;
        for(int i=0;i<arr.size()-1;i++){
            long long rightSum = totalSum -leftSum -arr[i];
            
            leftSum+=arr[i];
            if(min>abs(leftSum-rightSum)){
                min=abs(leftSum-rightSum);
                x=abs(leftSum-rightSum);
                index=i+2;
                if(rightSum-leftSum<0)pos=1;
                else pos=0;
            }
        }
        return {x,index,pos};
    }
};