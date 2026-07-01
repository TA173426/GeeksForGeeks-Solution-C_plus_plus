class Solution {
  public:
  

  
    vector<int> largestValues(Node* root) {
        
        // code here
        queue<Node*>q1;
        queue<Node*>q2;
        q1.push(root);
        vector<int>ans;
        int maxi =INT_MIN;
        while(!q1.empty()){
           while(!q1.empty()){ Node* temp = q1.front();
            q1.pop();
            maxi = max(temp->data,maxi);
            if(temp->right){
             q2.push(temp->right);   
            }
            if(temp->left){
             q2.push(temp->left);   
            }
               
           }
            q1.swap(q2);
            ans.push_back(maxi);
            maxi =INT_MIN;
        }
        return ans;
        
    }
};