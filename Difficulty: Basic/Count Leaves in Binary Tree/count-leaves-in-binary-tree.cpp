/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:

    void traverse(Node* root,int &count){
        
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            count++;
            return;
        } 
        
        traverse(root->left,count);
        traverse(root->right,count);
    }

    int countLeaves(Node* root) {
        // write code here
        int count =0;
        traverse(root,count);
        return count;
    }
};