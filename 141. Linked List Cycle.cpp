    //   &   ka function.... 0&1=0....first voilet ho gaya ki next check nai hota

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==NULL || head->next==NULL)
        {
            return 0;
        }
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL)                                //......this order.....very imp.......
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return 1;
            }
        }
        return 0;

    }
};
