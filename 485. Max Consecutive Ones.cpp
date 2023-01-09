//.........................................................................
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     for(int i=1;i<nums.size();i++)
     {
         if(nums[i]==1)
         {
             nums[i]=nums[i-1]+1;
         }
     }
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
        return max;
    }
};

//.................................................................

//-->using one for loop


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans_count=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                if(ans_count<count)
                {
                    ans_count=count;
                }
                count=0;
            }
        }
        if(count>ans_count)
        {
            ans_count=count;
        }
        return ans_count;
        
    }
};
//..............................................
