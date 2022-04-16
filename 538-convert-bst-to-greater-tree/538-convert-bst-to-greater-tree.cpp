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
    int sum = 0; //global variable
public:
    TreeNode* convertBST(TreeNode* root) 
    {
        if(root != NULL)
        {
            convertBST(root->right);//because right subtree has greater value than left subtree in the bst
            sum += root->val;//after reaching rightmost subtree value we sum it with the value greater than the root-?val
            root->val = sum;//then assign that root->val to sum variable 
            convertBST(root->left); //then again call left subtree recursively 
        }
         return root; //finally return the root
    }
   
};