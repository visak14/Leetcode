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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode*  answerHead = NULL;
        ListNode* answerTail = NULL;
 
        
        while (temp != NULL)
        {
             ListNode* i  = temp;
             ListNode* j =   temp;
            int freq = 0;
            while(j!= NULL && i->val == j->val){
                freq ++;
                j  = j->next;
           }
            if (freq ==1)
            {
                if (answerHead == NULL && answerTail == NULL){
                    answerHead = temp;
                    answerTail = temp;
                }
                else{
                    answerTail->next = temp;
                    answerTail = temp;
                }
               
            }
            temp = j;
               if(answerTail != NULL){
                answerTail->next = NULL;
           }
        }
        return answerHead;
    }
};