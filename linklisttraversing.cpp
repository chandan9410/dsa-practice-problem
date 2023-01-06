#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printdata(Node *head)
{
    Node *ck = head;

    while (ck != NULL)
    {
        cout << ck->data << "   ";
        ck = ck->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printdata(head);

    return 0;
}