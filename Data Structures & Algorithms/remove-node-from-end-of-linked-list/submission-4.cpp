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
        ListNode dummy(0, head);
        ListNode *left = &dummy;
        
        ListNode *right = head;
        //make it so the distance between left and right is n
        for(int i = 0; i < n; ++i){
            right = right->next;
        }
        while(right){
            left = left->next;
            right = right->next;
        }

        //take the left and connect it to the next next node which will remove the nth node from end of list
        ListNode *temp = left->next;
        left->next = temp->next;

        //return the head
        return dummy.next;

    }
};
