//.............
-->iterative

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*pre=NULL;
        ListNode*curr=head;
        ListNode*nex=NULL;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nex;
        }
        return pre;
    }
};

//.....................

-->recursive

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL ||head->next==NULL)                                   //here ...  head->next==NULL... see this...
        {
            return head;
        }
        ListNode*small_ans=reverseList(head->next);
        head->next->next=head;                                             // head->next->next..
        head->next=NULL;
        return small_ans;
    }
};

//........................







//....?


ListNode* helper(ListNode* pre, ListNode* curr)
{
    if(curr!=NULL)
    {   
        ListNode* head = helper(curr, curr->next);
        curr->next = pre;
        return head;
    }
    return pre;
}

ListNode* reverseList(ListNode* head) 
{
    return helper(NULL, head);
}

