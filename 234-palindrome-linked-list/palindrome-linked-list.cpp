class Solution {
public:
    ListNode* reverse(ListNode* slow){
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        ListNode* curr = slow;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
     ListNode* slow = head;
     ListNode* fast = head;
     ListNode* a = head;
     while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
     }
     slow->next = reverse(slow->next);
     slow = slow->next;
     while(slow!=NULL){
        if(a->val != slow->val){
            return false;
        }
        a = a->next;
        slow = slow->next;
     }
     return true;
    }
};