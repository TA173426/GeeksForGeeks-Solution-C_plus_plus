/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int checker(Node* root,bool &flag){
        if(root==NULL)return 0;
        int l = checker(root->left,flag)+1;
        int r = checker(root->right,flag)+1;
        if(abs(l-r)>1)flag=0;
        return max(l,r);
    }
        
    bool isBalanced(Node* root) {
        bool flag = 1;
        checker(root,flag);
        return flag;
    }
};