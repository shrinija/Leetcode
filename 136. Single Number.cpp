-->map
tc O(n)
sc O(n)

-->sorting
tc O(n)


//..............

//using XOR
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};
//tc O(n)
