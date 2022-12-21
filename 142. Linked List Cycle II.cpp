want to know .....................time complexity...........     ?
  
  -->compare...........  ?
  
  -->which one better       ?


//........................................................................

Runtime
8 ms
Beats
91.64%
Memory
7.7 MB
Beats
25.35%


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
          slow=slow->next;
          fast=fast->next->next;
          if(slow==fast)
          {
              fast=head;
              while(slow!=fast)
              {
                  slow=slow->next;
                  fast=fast->next;
              }
              return slow;
          }
        }
        return NULL;
    }
};

//..............................................................................

Runtime
8 ms
Beats
91.64%
Memory
7.7 MB
Beats
45.87%


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;
        bool a=0;
        while(fast!=NULL && fast->next!=NULL)
        {
          slow=slow->next;
          fast=fast->next->next;
          if(slow==fast)
          {
              a=1;
             break;
          }
        }    
       if(a==1)
      {
         fast=head;
         while(slow!=fast)
         {
            slow=slow->next;
            fast=fast->next;
         }
          return slow;
       }
     return NULL;
    }
};


//.....................................................................
