-->    while(fast->next->next!=NULL && fast->next->next->next!=NULL)  
  
  // ==>>> see when you are writing conditions like this
  like accessing next next pointers..
  make sure it it not trying to get next of null...in case that happens ...handle those cases explicitly





class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        if(head->next==NULL)
        {
            return NULL;
        }
        while(fast->next->next!=NULL && fast->next->next->next!=NULL)   // ==>>> see when you are writing conditions like this......
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};

//........................
--> can also be solved using ...one extra prev pointer... as slow moves on... it will take the value of slow pointer ...but obviously as extra pointer..
