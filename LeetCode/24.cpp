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
        
        ListNode* first = head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head; 
        ListNode* prev = dummy;

        while(first != nullptr && first->next !=nullptr ){
                ListNode* second = first->next;
                ListNode* next = second->next;

                first->next = next;
                second->next = first;

                prev->next = second;

                prev = first;
                first = next;
        }
        return dummy->next;


    }
};