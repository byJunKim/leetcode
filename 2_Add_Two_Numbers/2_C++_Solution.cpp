/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        int big = 0;
        ListNode *ptr1 = l1;
        ListNode *ptr2 = l2;
        ListNode *sum = NULL;
        
        ListNode *object = new ListNode(ptr1->val + ptr2->val);
        if(object->val >= 10){
            // object->val = object->val % 10;
            big = 1;
        }
        sum = object;
        
        ListNode *temp = sum;
        while(ptr1->next != NULL && ptr2->next != NULL){
            
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;

            ListNode *object_ = new ListNode(ptr1->val + ptr2->val + big);
            big = 0;
            if(object_->val >= 10){
                object_->val = object_->val % 10;
                big = 1;
            }
            
            temp->next = object_;
            
            temp = temp->next;
        
        }
        
        while(ptr1->next != NULL){
            
            ptr1 = ptr1->next;
            ListNode *object_ = new ListNode(ptr1->val + big);
            big = 0;
            if(object_->val >= 10){
                object_->val = object_->val % 10;
                big = 1;
            }
            temp->next = object_;
            
            temp = temp->next;
            
        }
        
        while(ptr2->next != NULL){
            
            
            ptr2 = ptr2->next;
            ListNode *object_ = new ListNode(ptr2->val + big);
            big = 0;
            if(object_->val >= 10){
                object_->val = object_->val % 10;
                big = 1;
            }
            temp->next = object_;
            temp = temp->next;
        }
        
        if(big){
            ListNode * object_ = new ListNode(1);
            temp->next= object_;
        }
        
    }
}