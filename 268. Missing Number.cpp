-->sorting approach

//.........




//bit manipulation..
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
          ans=ans^nums[i];
        }
        for(int i=0;i<=nums.size();i++)
        {
            ans=ans^i;
        }
        return ans;
    }
};



//....
//one for loop

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int i=0;
        for(;i<nums.size();i++)
        {
          ans=ans^nums[i]^i;
        }
        return ans^i;
    }
};




//..
//using sum ..

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int sum=0;
        int i=0;
        for(;i<nums.size();i++)
        {
          ans=ans+nums[i];
          sum=sum+i;
        }
        sum=sum+i;
        ans=sum-ans;
        return ans;
    }
};

//..........



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int sum=n*(n+1)/2;
        int i=0;
        for(;i<nums.size();i++)
        {
          ans=ans+nums[i];
        }
        ans=sum-ans;
        return ans;
    }
};
