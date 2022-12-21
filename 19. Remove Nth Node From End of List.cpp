when --> n=length of LL...... fast NULL ho jata hai....... vo erroe ho jayega firr..
  because ...in next while condition...it will try to access... NULL->next.....
    
   ####  LL ke questions me  
    -->edge cases pe dhya dena..
    --> start case 
    -->end case
      -->n kya diya hai... kai vo length se jada na diya ho..
      
      
      
      
      
  //..................................
      
      compare............................................tc ?
      
 //....................................
      
 -->using two while loop
 
 
 Runtime
7 ms
Beats
65.54%
Memory
10.8 MB
Beats
33.66%
      
 class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(n>0)
        {
            fast=fast->next;
            n--;
        }
        if(fast==NULL)
        {
            return head->next;
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;

    }
};     
      


//......................................................

-->using one while loop

Runtime
7 ms
Beats
65.54%
Memory
10.8 MB
Beats
33.66%

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode*slow=head;
     ListNode*fast=head;
     while(fast->next!=NULL)
     {
        if(n>0)
        {
            fast=fast->next;
            n--;
        }
        else
        {
            fast=fast->next;
            slow=slow->next;
        }

    }
    if(n>0)
    {
        return head->next;
    }
    slow->next=slow->next->next;
    return head;
    }
};
    
