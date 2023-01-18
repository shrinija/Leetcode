
//....................................................................................................................

//O(n^2)



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
int height(TreeNode*root)
{
   if(!root)
   {
       return 0;
   }
   return max(height(root->left),height(root->right))+1;
}
    bool isBalanced(TreeNode* root) {
        if(!root)
        {
            return 1;
        }
        bool lbalanced=isBalanced(root->left);
        if(!lbalanced)
        {
            return 0;
        }
        bool rbalanced=isBalanced(root->right);
         if(!rbalanced)
        {
            return 0;
        }
        int lh=height(root->left);
        int rh=height(root->right);
        return abs(lh-rh)<=1;
    }
};

//..................................................................................................


//O(n)


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
pair<int,bool>helper(TreeNode*root)
{
    if(root==NULL)
    {
        return{0,true};
    }
    //returns if left tree is balanced or not and its height
    pair<int,bool>l=helper(root->left);
    //returns if right tree is balanced or not and its height
    pair<int,bool>r=helper(root->right);

    //now for final ans
    pair<int,bool>ans;

    ans.first=max(l.first,r.first)+1;
    
    int diff=abs(l.first-r.first);

    if(diff<2 && l.second==true && r.second==true)
        ans.second=true;
    else
        ans.second=false;
return ans;
}
    bool isBalanced(TreeNode* root) {
       pair<int,bool>ans=helper(root);
       return ans.second;
    }
};

//..................................................................................................................

//bottom up approach

