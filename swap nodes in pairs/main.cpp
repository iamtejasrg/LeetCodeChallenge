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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return head;
        ListNode* ptr1 = head;
        if(head->next == NULL) return head;
        ListNode* ptr2 = head->next;
        while(ptr2){
            
            if(ptr1 == head){
                ListNode* temp = (head->next)->next;
                head = ptr1->next;
                ptr1->next = temp;
                head->next = ptr1;
                ptr2= ptr1->next;
                continue;
                //return ptr1;
            }
            if(ptr2->next == NULL) return head;
            else {
                ListNode* temp = (ptr2->next)->next;
                ptr1->next = ptr2->next;
                (ptr1->next)->next= ptr2;
                ptr2->next = temp;
                ptr1 = ptr2;
                ptr2 = ptr1->next;
                // return head;
                
            }
            
        }
        return head;
        
    }
};