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
    ListNode* reverseList(ListNode* head) {
        //1 -> 2 -> 3 -> 4 -> 5 -> NULL
        //5 -> 4 -> 3 -> 2 -> 1 -> NULL
        
        ListNode *previous = NULL;
        ListNode *current = head;
        ListNode *next_ptr;
        while(current){
            next_ptr = current->next;
            current->next = previous;
            previous = current;
            current = next_ptr;
        }
        return previous;
    }
};