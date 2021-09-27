// reverse a linked list

#include<bits/stdc++.h>
using namespace std;

Node* reverse_list(Node *head){

    Node *curr = head, *prev = NULL, *next = NULL;

    while (curr)
    {
           /* code */
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
    
}