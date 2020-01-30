/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        if(head == NULL) return 0;
        
        int ans = 0;
        int len = 0;
        ListNode* temp = head;
        
        while(temp != NULL){
            len++;
            temp = temp->next;
        } 
        
        temp = head;
        while(temp != NULL){
            if(temp->val == 1){
                ans += pow(2, len-1);
                len--;
            }else if(temp->val == 0){
                len--;
            }
            temp = temp->next;
        }
        return ans;
    }
};