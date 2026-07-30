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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
        ListNode* a = lists[lists.size()-1];
        lists.pop_back();
        ListNode* b = lists[lists.size()-1];
        lists.pop_back();
        ListNode* c = merge(a,b);
        lists.push_back(c);
        }
        return lists[0];
    }
};