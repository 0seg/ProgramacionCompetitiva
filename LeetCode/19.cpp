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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr){

            if(n > 0){
                fast = fast->next;
                n--;

            }

            else{ 
                slow = slow->next;
                fast = fast->next;
            }
            }
            if (n > 0){
                head = head->next;
            }else{
                slow->next = slow->next->next;
                }       
        return head;
    }
};