/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1, *ptr2=l2;
       
        ListNode* head = new ListNode();
        ListNode* ptr3 = head;
        ptr1 = l1, ptr2=l2;
        while(ptr1 || ptr2){
            if(ptr1==NULL){
                ptr3->next = ptr2;
                break;
            }
            if(ptr2==NULL){
                ptr3->next = ptr1;
                break;
            }
            if(ptr1->val <= ptr2->val){
                ptr3->next = new ListNode();
                ptr3 = ptr3->next;
                ptr3->val = ptr1->val;
                
                
                ptr1 = ptr1->next;
                
                continue;
            }
            if(ptr1->val > ptr2->val){
                ptr3->next = new ListNode();
                ptr3 = ptr3->next;
                ptr3->val = ptr2->val;
                
                
                ptr2 = ptr2->next;
               
            }
        }
        return head->next;
        
    }
};