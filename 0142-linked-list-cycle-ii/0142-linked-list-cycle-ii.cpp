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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
           
            if(slow==fast)
                break;        //if slow and fast meets then break out of the loop
        }
		
	    //if slow and fast didn't meet and we came out beacuse of no loop condition then return NULL
        if(fast==NULL||fast->next==NULL)
            return NULL;
			
		/*now place any pointer out of slow and fast at the beginning of the list and iterate over the list
		again by moving both the pointers by one position at a time until they meet again. This is the
		starting point of the loop, return it*/
		
       slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
		
        return slow;           
    }
};