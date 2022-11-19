class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int t=0;
        ListNode* ptr = head;
        while(ptr){
            t++;
            ptr= ptr->next;
        }
        int a = t-n-1;
        if(a<0) {
            head = head->next;
            return head;
        }
        ptr = head;
        while(a--){
  
            ptr= ptr->next;
        }
        if((ptr->next)->next) ptr->next = (ptr->next)->next;
        else ptr->next = NULL;
        
        return head;
    }
};