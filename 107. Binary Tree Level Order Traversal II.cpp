class Solution {

void levelOrder(TreeNode* root,vector<vector<int>>&v ) 
{
       
     queue<TreeNode *> q;

     vector<int> level;

    if (root != NULL)
    {

        q.push(root);
        level.push_back(root->val);
        v.push_back(level);
        level.clear();

        while (!q.empty())
        {
            int i, n = q.size();
            for (i = 0; i < n; i++)
            {
                TreeNode *p = q.front();
                q.pop();

                if (p->left != NULL)
                {
                    q.push(p->left);
                    level.push_back(p->left->val);
                }
                if (p->right != NULL)
                {
                    q.push(p->right);
                    level.push_back(p->right->val);
                }
            }                                             
            if (!level.empty())
            {
                v.push_back(level);
                level.clear();
            }
            
        }
    }
   
}


  
public:
  vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> v;
    levelOrder(root,v);
    reverse(v.begin(),v.end());
    return v;
    }
};


//........................................................................................................................................

********************************************************




void levelorder(vector<vector<int>> &v, TreeNode *node, int level) 
{
    if (node==NULL)
    { 
        return;
    }
    if (level == v.size())
    {
        v.push_back({});
    }

    v[level++].push_back(node->val);

    levelorder(v,node->left,level);
    levelorder(v,node->right,level);
}

//.......................................................................................................................................
  
