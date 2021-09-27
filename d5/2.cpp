/// middle of linked list

#include<bits/stdc++.h>
using namespace std;

int Find_middle(Node *head){

    Node *slow = head;
    Node* fast = head;

    while(fast and fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}