#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d, Node *n)
    {
        data = d;
        next = n;
    }
};

Node *convertArr2LL(int arr[], int size)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;
    for (int i = 1; i < size; i++)
    {
        Node *temp = new Node(arr[i], nullptr); // Fixed: Use Node, not temp
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int isPresent(Node *head, int value)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            cout << " value finded ";
            return 1;
            break;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{
    int arr[] = {3, 5, 7, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Fixed: Calculate array size
    Node *head = convertArr2LL(arr, n);
    cout << "Head Of LL : " << head->data << endl;

    Node *tempp = head;
    int count = 0;
    while (tempp != nullptr)
    {
        cout << tempp->data;
        count++;
        tempp = tempp->next;
    }

    cout << endl
         << "Length Of LL : " << count << endl;

    cout << isPresent(head, 1000);

    return 0;
}
