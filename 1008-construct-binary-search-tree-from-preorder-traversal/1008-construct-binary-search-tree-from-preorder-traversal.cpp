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
  //right subtree ke loye upperbound same hi rehta hia but like left waale ke liye like jo root node hota hai wo ho jaata hai aur root node to badalta  rehta hai 
   TreeNode *helper(vector<int> &preorder,int &i,int bound){
    if(i>=preorder.size() || preorder[i]>bound){
        return NULL;
    }
    TreeNode* root=new TreeNode(preorder[i]);
    i++;
    root->left=helper(preorder,i,root->val);
    root->right=helper(preorder,i,bound);
    return root;
   }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
      return helper(preorder,i,INT_MAX);
    }
};