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
        int count = 0;
        vector<int> reversedIdx;
        cout << head->val << endl;
        ListNode* ptr = head;
        while(ptr != NULL){
            if(ptr->val == 1){
                reversedIdx.push_back(count);
            }
            count++;
            ptr = ptr->next;
        }
        
        count = count - 1;
        for(int i=0; i < reversedIdx.size(); i++){
            ans += pow(2,count - reversedIdx[i]);
        }
        
        return ans;
    }
};



vector<int> top_predators;
    for(int i=0; i < predators.size(); i++){
        if(predators[i] == -1) top_predators.push_back(i);
    }
    
    for(int i=0; i < predators.size(); i++){
        
    }