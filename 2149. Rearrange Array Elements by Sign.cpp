-->
try more better approach...
  ?



//.....
  tc  O(n)
  sc  O(n)
  
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int j=0;
        int k=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                ans[j]=nums[i];
                j=j+2;
            }
            else
            {
                ans[k]=nums[i];
                k=k+2;
            }
        }
        return ans;
    }
};
