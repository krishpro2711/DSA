class Solution {
public:
    ListNode* successor = nullptr;
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr){
            return head;
        }
        ListNode *left, *right; //[left, right)
        left = right = head;
        for (int i = 1; i <= k; i++){
            if (right == nullptr) {return head;}
            right = right->next;
            
        }
        ListNode *new_head = reverseN(left, k);
        left->next = reverseKGroup(right, k);
        return new_head;
    }

    ListNode* reverseN(ListNode* head, int n){
        if (n == 1){
            head->next = successor;
            return head;
        }
        ListNode* last = reverseN(head->next, n-1);
        head->next->next = head;
        head->next = successor;
        return last;
    }
};