class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            n++;
        }
        temp = head;
        vector<ListNode*> v;
        int size = n/k;
        int rem = n%k;
        while(temp!=NULL){
            ListNode* c = new ListNode(0);
            ListNode* tempC = c;
            int s = size;
            if(rem>0) s++;
            rem--;
            for(int i=1; i<=s; i++){
                tempC->next = temp;
                tempC = tempC->next;
                temp = temp->next;
            }
            tempC->next = NULL;
            v.push_back(c->next);
        }
        if(v.size()<k){
           int extra = k - v.size();
           for(int i=0; i<extra; i++){
            v.push_back(NULL);
           }
        }
        return v;
    }
};