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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(0);
        ListNode* dummy2 = new ListNode(0);

        ListNode* prev1 = dummy1;
        ListNode* prev2 = dummy2;

        ListNode* current = head;

        while(current != nullptr){

            if (current->val < x){
                prev1->next = current;
                prev1 = current;
            }else{
                prev2->next = current;
                prev2 = current;
            }

            current = current->next;

        }
        prev2->next = nullptr;


        prev1->next = dummy2->next;

        return dummy1->next;

    }
};