class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* TempA = head;
        ListNode* evenhead = head->next;
        ListNode* TempB = head->next;
        while(TempB!=NULL && TempB->next!=NULL){
            TempA->next = TempB->next;
            TempA = TempA->next;
            TempB->next = TempA->next;
            TempB = TempB->next;
        }
        TempA->next = evenhead;
        return head;
    }
};

