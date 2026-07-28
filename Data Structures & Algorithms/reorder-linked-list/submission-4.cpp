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
    void reorderList(ListNode* head) {
        //middle
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        //separate into 2 lists, and reverse the second one
        ListNode *start_list2 = slow->next;
        ListNode *tail_list2 = nullptr;
        slow->next = nullptr;
        while(start_list2){
            ListNode *temp = start_list2->next;
            start_list2->next = tail_list2;
            tail_list2 = start_list2;
            start_list2 = temp;
        }

        //merge the lists;
        while(tail_list2){
            ListNode *temp1 = head->next;
            ListNode *temp2 = tail_list2->next;
            head->next = tail_list2;
            tail_list2->next = temp1;
            head = temp1;
            tail_list2 = temp2;
        }
    }
};
