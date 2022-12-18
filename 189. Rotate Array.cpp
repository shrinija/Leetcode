#1. Make an extra copy and then rotate.
Time complexity: O(n). Space complexity: O(n).

    class Solution 
    {
    public:
        void rotate(int nums[], int n, int k) 
        {
            if ((n == 0) || (k <= 0))
            {
                return;
            }
            
            // Make a copy of nums
            vector<int> numsCopy(n);
            for (int i = 0; i < n; i++)
            {
                numsCopy[i] = nums[i];
            }
            
            // Rotate the elements.
            for (int i = 0; i < n; i++)
            {
                nums[(i + k)%n] = numsCopy[i];
            }
        }
    };


//............................

#2. Start from one element and keep rotating until we have rotated n different elements.
Time complexity: O(n). Space complexity: O(1).
  
  
  -->my code

   class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int size=nums.size();
        int i=0;
        int temp=nums[0];
        while(n>0)
        {
            int before=temp;
            temp=nums[(i+k)%size];
            nums[(i+k)%size]=before;
            i=(i+k)%size;
            n--;
        }
    }
};

//...............................


#3. Reverse the first n - k elements, the last k elements, and then all the n elements.
Time complexity: O(n). Space complexity: O(1).

void rotate(int nums[], int n, int k) 
 {
     k = k%n;
 
     reverse(nums, nums + n - k);
     reverse(nums + n - k, nums + n);
     reverse(nums, nums + n);
 }

-->(or)                               //......but  doing reverse 3 times makes it O(n)+O(n)+(O)....? is it good  ?
void rotate(int nums[], int n, int k) 
{
    reverse(nums,nums+n);
    reverse(nums,nums+k%n);
    reverse(nums+k%n,nums+n);
}

//...........................



#4. Swap the last k elements with the first k elements.
Time complexity: O(n). Space complexity: O(1).

    void rotate(int nums[], int n, int k) 
    {
        for (; k = k%n; n -= k, nums += k)
        {
            for (int i = 0; i < k; i++)
            {
                swap(nums[i], nums[n - k + i]);
            }
        }
    }
//..............


#5. Keep swapping two subarrays.
Time complexity: O(n). Space complexity: O(1).

class Solution 
{
public:
    void rotate(int nums[], int n, int k) 
    {
        if ((n == 0) || (k <= 0) || (k%n == 0))
        {
            return;
        }
        
        k = k%n;
        // Rotation to the right by k steps is equivalent to swapping 
        // the two subarrays nums[0,...,n - k - 1] and nums[n - k,...,n - 1].
        int start = 0;
        int tmp = 0;
        while (k > 0)
        {
            if (n - k >= k)
            {
                // The left subarray with size n - k is longer than 
                // the right subarray with size k. Exchange 
                // nums[n - 2*k,...,n - k - 1] with nums[n - k,...,n - 1].
                for (int i = 0; i < k; i++)
                {
                    tmp = nums[start + n - 2*k + i];
                    nums[start + n - 2*k + i] = nums[start + n - k + i];
                    nums[start + n - k + i] = tmp;
                }
                
                // nums[n - 2*k,...,n - k - 1] are in their correct positions now.
                // Need to rotate the elements of nums[0,...,n - k - 1] to the right 
                // by k%n steps.
                n = n - k;
                k = k%n;
            }
            else
            {
                // The left subarray with size n - k is shorter than 
                // the right subarray with size k. Exchange 
                // nums[0,...,n - k - 1] with nums[n - k,...,2*(n - k) - 1].
                for (int i = 0; i < n - k; i++)
                {
                    tmp = nums[start + i];
                    nums[start + i] = nums[start + n - k + i];
                    nums[start + n - k + i] = tmp;
                }
                
                // nums[n - k,...,2*(n - k) - 1] are in their correct positions now.
                // Need to rotate the elements of nums[n - k,...,n - 1] to the right 
                // by k - (n - k) steps.
                tmp = n - k;
                n = k;
                k -= tmp;
                start += tmp;
            }
        }
    }
};
