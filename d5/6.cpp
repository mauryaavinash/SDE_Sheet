/// Add two number as linked list

#include<bits/stdc++.h>
using namespace std;


  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
       ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL, *tail = NULL;
        ListNode* t1 = l1, *t2 = l2;
        int carry = 0;
        int cur=0;
        while(t1 or t2) {
            if(t1==NULL){
                cur=t2->val+carry;
                t2=t2->next;
            }
            else if(t2==NULL){
                cur=t1->val+carry;
                t1=t1->next;
            }
            else{
                 cur = t1->val + t2->val + carry;
                 t1=t1->next;
                t2=t2->next;
            }
            if (cur > 9) {
                carry = cur / 10;
                cur %= 10;
            }
            else 
                carry = 0;
            
            
            ListNode* temp = new ListNode(cur);
            
            if (head == NULL) {
                head = temp;
                //tail = temp->next;
                tail = temp;
            }
            else {
                tail->next = temp;
                tail = temp;
            }
        }
        if(carry>0){
            ListNode* t=new ListNode(carry);
            tail->next=t;
            tail=t;
            return head;
        }
        else
             return head;
    }
};