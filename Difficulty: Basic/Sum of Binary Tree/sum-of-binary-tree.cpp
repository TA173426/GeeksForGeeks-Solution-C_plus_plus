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
  
    void traverse(Node * root,int &sum){
        if(root==NULL)return;
        sum+=root->data;
        traverse(root->left,sum);
        traverse(root->right,sum);
    }
  
    int sumBT(Node* root) {
        // code here
        int sum =0;
        traverse(root,sum);
        return sum;
    }
};