//..................................................................................................
//using two queue

class MyStack {
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q1.pop();
        while(q2.empty()!=1)
        {
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }
    
    int top() {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);
        q1.pop();
        while(q2.empty()!=1)
        {
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

//..........................................................................................................
//using two queue .. but better than above

class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
      int ans=q1.front();
        q1.pop();
   return ans;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
     return q1.empty();   
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

//.......................................................................................................

//-->using one queue

#include<bits/stdc++.h>


class MyStack {
    queue < int > q;
public:
    MyStack() {
          
    }
    
    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;i++)
        {
          q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int num=q.front();
        q.pop();
        return num;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
//...................................................................................................
