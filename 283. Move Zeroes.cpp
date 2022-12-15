-->2,3
-->3,2,0,4,3,0,1

//...............................

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        for(;j<nums.size();j++)
        {
            if(nums[j]!=0)
            {
                nums[i++]=nums[j];
            }
        }
        for(;i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};


//using one loop
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=1;
        while(j<nums.size())
        {
            if((nums[i]!=0 && nums[j]!=0) || (nums[i]!=0 && nums[j]==0))
            {
                i++;
                j++;
            }
            else if(nums[i]==0 && nums[j]!=0)
            {
                swap(nums[i++],nums[j++]);
            }
            else if(nums[i]==0&& nums[j]==0)
            {
                j++;
            }
        }
    }
};

//see ...one loop...how we are using i,j...for swapping...with less code...in above sol..j=1...here..j=0..and better logic..

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
           while(j<nums.size())
           {
               if(nums[j]!=0)
               {
                   swap(nums[i++],nums[j++]);
               }
               else
               {
                   j++;
               }
           }
    }
};
