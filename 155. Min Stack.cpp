

//...............................................................................................................................................................

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  wrong ans

--> because............ do thi ......... push(1) push(2)   pop() pop()      push(5)...at this time min is 5 but because we have 1 in our min.. ........

class MinStack {
    stack<pair<int,int>>s;
    int min;
public:
    MinStack() {
        min=INT_MAX;
    }
    
    void push(int val) {
        if(val<min)
        {
          min=val;
        }
         s.push({val,min});
    }
    
   //................ this is also wrong.... see..
  
    void push(int val) {
        if(s.empty())
        {
            minval=val;
        }
        else
        {
            minval=min(val,minval);
        }
         s.push({val,minval});
    }
};
//................ this is write.............. know why this is write and not above.... dry run.............
//uske pehle vale se compair karna ..because when you do pop ... tab uske bad dekhana eak barr ........

    void push(int val) {
        if(s.empty())
        {
            minv=val;
        }
        else
        {
          minv=min(val,s.top().second);
        }
         s.push({val,minv});
    }

// but in this approach sc: O(2n)

//..................................................................................................

-->>>>>>>>>>>>>  better approach...  tc : O(1)  sc : O(n)
  
  
  
  
