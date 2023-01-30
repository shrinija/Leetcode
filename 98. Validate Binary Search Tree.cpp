//do it again........
learn range.......
  
  
//........................................................................................................................................
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
void inorder(TreeNode*root,vector<int>&v)
{
      if(root==NULL)
      {
          return;
      }
      inorder(root->left,v);
      v.push_back(root->val);
      inorder(root->right,v);
}
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
      for(int i=0;i<v.size()-1;i++)
      {
          if(v[i]>=v[i+1])
          return 0;
      }
      return 1;
    }
};

//...........................................................................................................................

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

	bool Helper(TreeNode* root, long min, long max) {
		if(root == NULL){
			return true;
		}   
		if(root->val > min && root->val < max) {
			return Helper(root->left, min, root->val) && Helper(root->right, root->val, max);
		}    
		return false;
	}
	bool isValidBST(TreeNode* root) {
		return Helper(root, LONG_MIN, LONG_MAX);
	} 
};

//.................................................................................................................................
