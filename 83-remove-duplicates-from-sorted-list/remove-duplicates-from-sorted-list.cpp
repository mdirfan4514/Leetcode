class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode* tempA = head;
        ListNode* tempB = head->next;
        while(tempB!=NULL && tempA->next!=NULL){
            if(tempA->val == tempB->val){
                tempA->next = tempA->next->next;
                tempB = tempB->next;
            }
            else{
                tempA = tempA->next;
                tempB = tempB->next;
            }
        }
        return head;
    }
};