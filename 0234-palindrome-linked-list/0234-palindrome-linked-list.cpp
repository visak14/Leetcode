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
    bool isPalindrome(ListNode* head) {
        ListNode* iter = head;
        string s = "";
        while(iter){
            s +=to_string(iter->val);
            iter = iter->next;
        }
        string revs = s;
        reverse(revs.begin(), revs.end());
        if(revs == s)
            return true;
        else
            return false;
    }
};