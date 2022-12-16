class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
               sum=nums[i]+nums[j];
               if(sum==target)
               {
                   ans.push_back(i);
                   ans.push_back(j);
                   break;
               }
            }
        }
        return ans;
    }
};
//tc O(n^2)


//................................
hash solution
?
tc O(n)
  sc O(n)


The basic idea is to maintain a hash table for each element num in nums,
using num as key and its index (0-based) as value. For each num,
search for target - num in the hash table. If it is found and is not the same element as num, then we are done.

The code is as follows. Note that each time before we add num to mp, we search for target - num first and so we will not hit the same element.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};
