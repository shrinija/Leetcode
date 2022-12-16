-->7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5
  
  
in question
-->given..mejority element is present..
  
  
  //.................
  
  -->by counting
  //tc O(n^2)
  
  -->map
  //
  
  
  
  //.............
 --> Moore's voting algorithm
  
  tc O(n)
  sc O(1)
  
  class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele=0;

        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0)
            {
                ele=nums[i];
            }
            if(nums[i]==ele)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        return ele;
    }
};

//.............
