/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>A;
    void preorder(TreeNode *root)
    {
        if(root!=NULL)
        {
            A.push_back(root->val);
             preorder(root->left);
            preorder(root->right);
        }
    }
    void flatten(TreeNode* root) {
       if(root!=NULL)
       {
        preorder(root);
        root->val=A[0];
        root->left=NULL;
        root->right=NULL;
        TreeNode *temp=root;
            for(int i=1;i<A.size();i++)
           {
            temp->right=new TreeNode(A[i]);
          temp=temp->right;
          }
       }
    }
};
