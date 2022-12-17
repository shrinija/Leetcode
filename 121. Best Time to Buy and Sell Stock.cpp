-->4,3,2,7,2,9,6,1
  
  
  -->difference -->max
  -->right>left
  
  
  //..................
  brute ..
  tc O(n^2)
  
  
  class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff;
        int max_p=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                diff=prices[j]-prices[i];
                max_p=max(max_p,diff);
            }
        }
        return max_p;
    }
};

//..................

-->approach
-->O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
               min=prices[i];
            }
            int diff=prices[i]-min;
            if(diff>profit)
            {
                profit=diff;
            }
        }
        return profit;
    }
};

//...........
//--> ye uparr ka aur ache se likh sakte hai..

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_p=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            min_p=min(min_p,prices[i]);
            profit=max(profit,prices[i]-min_p);
        }
        return profit;
    }
};
  
