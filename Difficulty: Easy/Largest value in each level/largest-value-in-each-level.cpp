class Solution {
  public:
  
    void traverse(Node* root,int level ,vector<int>&ans,int &count){
        if(root==NULL)return;
        ans[level]= max(ans[level],root->data);
        count = max (count,level);
        traverse(root->left,level+1,ans,count);
        traverse(root->right,level+1,ans,count);
    }
  
    vector<int> largestValues(Node* root) {
        // code here
        vector<int>ans(100000);
        vector<int>a;
        int level =0,count=0;
        traverse(root,level,ans,count);
        for(int i=0;i<=count;i++){
            a.push_back(ans[i]);
        }
        return a;
    }
};