class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(nums[i]>nums[(i+size+1)%size])
            {
                 count++;
                 if(count>1)
                 {
                     return false;
                 }
            }
        }
        return true;
    }
};

//tc  O(n)
//sc  O(1)


//..........................
 bool check(vector<int>& A) {
        for (int i = 0, k = 0; i < A.size(); ++i)
            if (A[i] > A[(i + 1) % A.size()] && ++k > 1)
                return false;
        return true;
    }
