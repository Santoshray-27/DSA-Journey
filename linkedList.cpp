#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node head;
    Node second;
    Node third;
    Node fourth;

    head.data = 1;
    head.next = &second;

    second.data = 2;
    second.next = &third;

    third.data = 3;
    third.next = &fourth;

    fourth.data = 4;
    fourth.next = NULL;

    Node temp = head;
    while (temp != NULL )
    {
        
    }
    
}
