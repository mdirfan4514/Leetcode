class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        int lenB = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=NULL){
            lenA++;
            tempA = tempA->next;
        }
        while(tempB!=NULL){
            lenB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;

        if(lenA>lenB){
            int idx = lenA-lenB;
            for(int i=1;i<=idx; i++){
                tempA = tempA->next;
            }
          }
          else {
            int idx = lenB-lenA;
            for(int i=1; i<=idx; i++){
                tempB = tempB->next;
            }
          }
        
        while(tempA!=tempB){
            tempA = tempA->next;
            tempB = tempB->next;
        }
        if(tempA!=tempB) return NULL;
        return tempA;
    }
};