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

//[0, 1, 2, 3, 4, 5, 6]
//[0, 6, 1, 5, 2, 4, 3]
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

        //separate into 2 lists, reverse second list
        ListNode *head_secondlist = slow->next;
        ListNode *prev = nullptr;
        slow->next = nullptr;
        while(head_secondlist){
            ListNode *temp = head_secondlist->next;
            head_secondlist->next = prev;
            prev = head_secondlist;
            head_secondlist = temp;
        }
        
        //merge the lists
        //ListNode *start_list1 = head;
        while(prev){
            ListNode *temp1 = head->next;
            ListNode *temp2 = prev->next;
            head->next = prev;
            prev->next = temp1;
            head = temp1;
            prev = temp2;
        }
    }
};
