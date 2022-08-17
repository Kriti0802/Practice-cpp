/*You are given the root of a binary search tree (BST) and an integer val.

Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.*/



#include<bits\stdc++.h>
#include<vector>
using namespace std;


struct TreeNode {
     int val;
      TreeNode *left;
     TreeNode *right;
  };class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            return NULL;
            
        }
        if(root->val==val)
        {
            return root;
        }
        if(root->val>val)
        {
           return root->left=searchBST(root->left,val);
        }
        else if(root->val<val)
        {
       return  root->right=searchBST(root->right,val);
        }
        
        return root;
    }
};