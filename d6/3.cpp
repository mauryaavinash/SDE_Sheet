// reverse in k group size 

#include<bits/stdc++.h>
using namespace std;


 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    bool check(ListNode *head, int k){
        
        int len  = 0;
        ListNode *temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        if(len >= k)
            return false;
        else
            return true;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL or check(head,k))
            return head;
        int count = k;
        ListNode* curr = head;
        ListNode *prev = NULL, *next = NULL;
        while(curr and count--){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};