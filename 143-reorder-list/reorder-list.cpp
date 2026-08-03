class Solution {
public:
    ListNode* reverseList(ListNode* newhead){
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        ListNode* curr = newhead;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* c = reverseList(slow->next);
        slow->next = NULL;
        ListNode* x = new ListNode(10);
        ListNode* tempx = x;
        ListNode* y = head;
        ListNode* tempy = head;
        ListNode* z = c;
        ListNode* tempz = c;
        while(tempy!=NULL && tempz!=NULL){
            tempx->next = tempy;
            tempx = tempx->next;
            tempy = tempy->next;
            tempx->next = tempz;
            tempx = tempx->next;
            tempz = tempz->next;
        }
        tempx->next = tempy;
        head = c->next;
    }
};