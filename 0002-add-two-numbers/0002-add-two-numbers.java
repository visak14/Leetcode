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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
         ListNode answerHead = null;
        ListNode  answerTail = null;
        int carry = 0;
        while (l1 != null && l2 != null){
              int sum  = l1.val + l2.val + carry;
              int value = sum%10;
              carry = sum / 10;

              ListNode newnode = new ListNode(value);
              if (answerHead == null && answerTail == null){
                  answerHead = newnode;;
                  answerTail = newnode;
              }
                  else {
                      answerTail.next = newnode;
                      answerTail = answerTail.next;
                  }
                  l1 = l1.next;
                  l2 = l2.next;
              }

              while(l1 != null){
                  int sum = l1.val + carry;
                  int value = sum % 10;
                  carry = sum / 10;

               ListNode newnode = new ListNode(value);
              if (answerHead == null && answerTail == null){
                  answerHead = newnode;;
                  answerTail = newnode;
              }
                  else {
                      answerTail.next = newnode;
                      answerTail = answerTail.next;
                  }
                  l1 = l1.next;
              }

              while (l2 != null){
                  int sum = l2.val + carry;
                  int value = sum % 10;
                  carry = sum / 10;

                ListNode newNode = new ListNode(value);
              if (answerHead == null && answerTail == null){
                  answerHead = newNode;
                  answerTail = newNode;
              }
                  else {
                      answerTail.next = newNode;
                      answerTail = answerTail.next;
                  }
                  l2 = l2.next;
              }

              if (carry == 1){
             ListNode newNode = new ListNode(carry);
              if (answerHead == null && answerTail == null){
                  answerHead = newNode;
                  answerTail = newNode;
              }
                  else {
                      answerTail.next = newNode;
                      answerTail = answerTail.next;
                  }
              }
              return answerHead;
    }
}