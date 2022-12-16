-->[-1]
-->[1,4,-1,-7,5,-1,2]
-->[1,2,-1,-7,5,-1]







-->three loop approach .. tc O(n^3)
-->two loop approach .. tc O(n^2)


  --> dp approach  ??
  
  
//...............
  
-->kadanne's algorithm
  tc O(n)
  
  class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum>max)                                        //first you shold write this condition only...then sum...think why
            {
                max=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return max;
    }
};
