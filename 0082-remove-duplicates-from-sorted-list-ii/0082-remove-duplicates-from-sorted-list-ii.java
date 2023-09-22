/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode temp = head;
        ListNode answerHead  = null;
        ListNode answerTail = null;
        while (temp != null){
            ListNode  i = temp;
            ListNode j = temp;
            int freq= 0;
            while(j !=null && i.val == j.val){
                freq ++;
                j = j.next;
            }
            if (freq == 1 ){
                if(answerHead == null && answerTail == null){
                    answerHead  = temp;
                    answerTail = temp;
                }
                else {
                    answerTail.next = temp;
                    answerTail = temp;
               }
            }
            temp = j;
            if(answerTail != null){
                answerTail.next = null;
            }
           
        }
         return answerHead;
    }
}