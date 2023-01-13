//............................................................................
//using 1 queue


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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>ans;
        queue<TreeNode*>q;
       
        if(root)
        {
            q.push(root);
        }

        while(q.size())
        {
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++)
            {
                TreeNode*front=q.front();
                q.pop();
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
                v.push_back(front->val);
            }
            ans.push_back(v);
        }
        return ans;
    }
};

//..........................................................

// using 2 queue without for loop

// Queue_1.swap(Queue_2);       



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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
         if(!root)
         {
            return ans;
         }

    queue<TreeNode*> q;
    vector<int> level;
    queue<TreeNode*> q1;
    q.push(root);

    while(!q.empty())
    {
        TreeNode* n = q.front();
        q.pop();
        level.push_back(n->val);
        if(n->left)
        {
            q1.push(n->left);
        }
        if(n->right)
        {
            q1.push(n->right);
        }

        if(q.empty())
        {
            q.swap(q1);                        //swap function
            ans.push_back(level);
            level.clear();
        }
    }
    
    return ans;
    }
};

//.................................................................................
