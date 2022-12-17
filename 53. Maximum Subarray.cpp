-->[-1]
-->[-3,-1,-2,]                      //see this
-->[1,4,-1,-7,5,-1,2]
-->[1,2,-1,-7,5,-1]
-->1,2,3,-2,5





-->three loop approach .. tc O(n^3)
-->two loop approach .. tc O(n^2)


  --> dp approach  ??
  -->divide and conquer  ?
  -->optimized divide and conqure?
  -->recursive ?
  
  
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














//..............................................

-->We can start with brute-force by trying out every possible sub-array in nums and choosing the one with maximum sum.
  
  
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = size(nums), ans = INT_MIN;
        for(int i = 0; i < n; i++) 
            for(int j = i, curSum = 0; j < n ; j++) 
                curSum += nums[j],
                ans = max(ans, curSum);        
        return ans;
    }
};


//............
