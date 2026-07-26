class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        if(len == n){
            head = head->next;
            return head;
        }
        temp = head;
        int idx = len-n;
        for(int i=1; i<idx; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};