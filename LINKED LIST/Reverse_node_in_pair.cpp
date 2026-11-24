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
ListNode* reverse(ListNode*head)
{
    ListNode*temp=head;
    ListNode*prev=NULL;
    ListNode*front=NULL;
    while(temp!=NULL)
    {
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;

    }
    return prev;
}
ListNode*kthnode(ListNode*temp,int k)
{
    k-=1;
    while(temp!=NULL && k>0)
    {
        k--;
        temp=temp->next;
    }
    return temp;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
ListNode*prevnode=NULL;
while(temp!=NULL){
       ListNode* kth=kthnode(temp,k);
       if(kth==NULL)
       {
        if(prevnode){
            prevnode->next=temp;
        }
        break;
       }
      ListNode*agla=kth->next;
       kth->next=NULL;
        reverse(temp);
        if(temp==head)
        {
            head=kth;
        }
        else
        {
           prevnode->next=kth;
        }
        prevnode=temp;
        temp=agla;

}
return head;
    }
};