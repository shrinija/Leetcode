.....................-->when we have pair inside vector

  -->and if we apply sort function ...
  -->it get sorted according to the...
  -->first value in pair...
  


#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

   int nums[10] = {1, 4, 2, 6, 7, 4, 22, 21, 12, 4};
   vector<pair<int, int>> v;
   for (int i = 0; i < 10; i++)
      v.push_back({nums[i], i});
   sort(v.begin(), v.end());

   for (int i = 0; i < v.size(); i++)
   {
      cout << " " << v[i].first;
   }
   cout << endl;
   for (int i = 0; i < v.size(); i++)
   {
      cout << " " << v[i].second;
   }
}



//.........................................................................................


//Ist Approach
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
            v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int i=0;
        int j=v.size()-1;
        int idx1=0;
        int idx2=0;
        while(i<j)
        {
            if(v[i].first+v[j].first==target)
            {
                idx1=v[i].second;
                idx2=v[j].second;
                break;
                
            }
            if(v[i].first+v[j].first<target)
                i++;
            if(v[i].first+v[j].first>target)
                j--;
    }
        return {idx1,idx2};
    }
//Time Complexity:O(nlogn)
//Time Complexity:O(n)

//Second Approach

   vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
       return v;
    }

//Time Complexity:O(n)
//Space Complexity:O(n)

//Third Approach
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            int k=target-nums[i];
            for(int j=i+1;j<size;j++)
            {
                if(nums[j]==k)
                {
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
            if(index.size()==2)
                break;
        }
        return index;
    }
	//Time Complexity: O(n^2)




//...............................................................

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
               sum=nums[i]+nums[j];
               if(sum==target)
               {
                   ans.push_back(i);
                   ans.push_back(j);
                   break;
               }
            }
        }
        return ans;
    }
};
//tc O(n^2)


//................................
hash solution
?
tc O(n)
  sc O(n)


The basic idea is to maintain a hash table for each element num in nums,
using num as key and its index (0-based) as value. For each num,
search for target - num in the hash table. If it is found and is not the same element as num, then we are done.

The code is as follows. Note that each time before we add num to mp, we search for target - num first and so we will not hit the same element.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};
