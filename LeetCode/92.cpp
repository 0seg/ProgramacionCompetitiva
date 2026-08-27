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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0); 
        ListNode* current = head;
        ListNode* prev = dummy;
        ListNode* s = nullptr;
        ListNode* prevRev = nullptr;

        int pos = 1;


        dummy->next = head;

        while(pos <= right){
            if (pos < left){
                prev = prev->next;
                current = current->next;
                pos++;
            }
            if (pos >= left && pos <= right){
                if (pos == left){
                s = current;
                }
                ListNode* temp = current->next;
                current->next= prevRev;
                prevRev = current;
                current = temp;
                pos++;

            }
        } 
        prev->next = prevRev;
        s->next = current;

        return dummy->next;


    }
};