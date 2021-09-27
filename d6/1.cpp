/// y intersection linked list

#include<bits/stdc++.h>
using namespace std;

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int  n = 0, m = 0;
    Node *temp1  = head1;
    Node *temp2 = head2;
    while(temp1){
        temp1 = temp1->next;
        n++;
    }
    while(temp2){
        temp2 = temp2->next;
        m++;
    }
    if(m > n){
        int t = 0;
        while(t < (m-n)){
            head2 = head2->next;
            t++;
        }
    }
    else{
        int t = 0;
        while( t < (n-m)){
            t++;
            head1 = head1->next;
        }
    }
    while(head1 and head2){
        if(head1 == head2)
            return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}
