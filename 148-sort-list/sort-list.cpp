class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2){
       ListNode* a = new ListNode(0);
       ListNode* temp = a;
       while(list1!=NULL && list2!=NULL){
        if(list1->val < list2->val){
            temp->next = list1;
            list1 = list1->next;
            temp = temp->next;
        }
        else{
            temp->next = list2;
            list2 = list2->next;
            temp = temp->next;
        }
       }
       if(list1!=NULL){
        temp->next = list1;
       }
       else{
        temp->next = list2;
       }
       return a->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
        a = sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c;
    }
};