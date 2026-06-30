/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  
    void traverse(Node* root,int &count){
        if(root==NULL)return;
        count++;
        traverse(root->left,count);
        traverse(root->right,count);
    }
          
    int getSize(Node* root) {
        // code here
        int count =0;
        traverse(root,count);
        return count;
    }
};