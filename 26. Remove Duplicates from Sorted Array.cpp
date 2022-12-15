class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 1;
        }
        int i=0;
        int j=1;
        for(;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[++i]=nums[j];
            }
        }
        return i+1;
    }
};
//tc  O(n)
//sc  O(1)
