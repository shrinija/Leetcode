
//..............................................................................

//recursive



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
void helper(TreeNode*root,vector<int>&v)
{
    if(root)
    {
        v.push_back(root->val);
    }
    else
    {
        return;
    }
    helper(root->left,v);
    helper(root->right,v);
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        helper(root,v);
        return v;
    }
};


//................................................................................

//gfg question

//itetrative

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
  stack<Node*> st;
  if(root)
  {
    st.push(root);
  }
  
  while(!st.empty())
  {
      Node*top = st.top();
      st.pop();
      v.push_back(top->data);
      
      if(top->right != NULL)
      {
          st.push(top->right);
      }
      if(top->left != NULL)
      {
          st.push(top->left);
      }
  }
 return v;
}
//..............................................................................
