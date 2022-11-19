class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL) return head;
        int p=1;
        ListNode* ptr1= head;
        while(ptr1->next){
            p++;
            ptr1= ptr1->next;
        }
        if(p==1) return head;
        ListNode* ptr2= head;
        int n = p-(k%p);
        while(--n)ptr2=ptr2->next;
        ptr1->next = head;
        head = ptr2->next;
        ptr2->next = NULL;
        
        return head;
        
        
    }
};