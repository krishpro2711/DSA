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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       
        vector<int> arr;

for (int i = 0; i < lists.size(); i++) {
    ListNode* temp = lists[i];

    while (temp != NULL) {
        arr.push_back(temp->val);
        temp = temp->next;
    }
}
    if(arr.empty()){
        return NULL;
    }
    sort(arr.begin(),arr.end());
    ListNode*head=new ListNode(arr[0]);
    ListNode*temp1=head;
    for(int i=1;i<arr.size();i++){
        ListNode*temp2=new ListNode(arr[i]);
        temp1->next=temp2;
        temp1=temp1->next;
    }
    return head;

    }
    
};