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
//[0, 1, 2, 3, 4, 5, 6]
//[0, 6, 1, 5, 2, 4, 3]
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode *fast = head->next;

        //Find the middle
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        //split into two halves, reverse the second half
        ListNode *current = slow->next;
        ListNode *prev = nullptr;
        slow->next = nullptr;

        while(current){
            ListNode *temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        ListNode *start = head;

        while(prev){
            ListNode *temp1 = start->next;
            ListNode *temp2 = prev->next;
            start->next = prev;
            prev->next = temp1;
            start = temp1;
            prev = temp2;
        }



    }
};
