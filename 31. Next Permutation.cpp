-->1,2,3,9,7,5,5,2,1                        //good taste case to know which 5 should be swapped
-->5,3,2,1,1
  
  
 ==) algorithm
  -->start itetrating from last and find where flow crashed....   
  -->get the no.  to be swaped
  -->now find no which is just geater than this no
  -->swap
  -->reverse ...from the no next to swap till end


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        int to_swap;
        for(;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
               to_swap=nums[i-1];
               break;
            }
        }
         if(i==0)
         {
             reverse(nums.begin(),nums.end());
             return;
         }
         int big=INT_MAX;
         int big_index;
         for(int j=i;j<nums.size();j++)                              //this thing ..can also be improved...because you konw they are sorted ..... see bottom code
         {
             if(to_swap<nums[j] && nums[j]<=big)
             {
                 big=nums[j];
                 big_index=j;
             }
         }

         swap(nums[i-1],nums[big_index]);
         sort(nums.begin()+i,nums.end());                 //shrinija dont use sort ...rather use reverse... sort takes O(nlogn)...reverse takes O(n)

     return;
    }
};


//...................................................................

--> tc O(n)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--)
      {
            if (nums[k] < nums[k + 1])
            {
                break;
            }
        }
    	if (k < 0) 
      {
    	    reverse(nums.begin(), nums.end());
    	}
      else 
      {
    	    for (l = n - 1; l > k; l--)                                 //see this for loop
          {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
}; 
