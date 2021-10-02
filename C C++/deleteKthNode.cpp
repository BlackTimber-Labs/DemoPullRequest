#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
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

void printList(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}

Node *deleteNode(Node *head, int pos)
{
    if (pos == 1)
    {
        if (head == NULL)
            return NULL;
        if (head->next == NULL)
        {
            delete (head);
            return NULL;
        }

        head->data = head->next->data;
        Node *temp = head->next;
        head->next = head->next->next;
        delete (temp);
        return head;
    }
    else
    {
        Node *curr = head;
        Node *prev = head;
        for (int i = 1; i < pos; i++)
        {
            curr = curr->next;
        }
        for (int i = 1; i < pos - 1; i++)
        {
            prev = prev->next;
        }
        prev->next = curr->next;
        delete curr;
        return head;
    }
}

// Node *deleteHead(Node *head)
// {
//     if (head == NULL)
//         return NULL;
//     if (head->next == NULL)
//     {
//         delete (head);
//         return NULL;
//     }
//     head->data = head->next->data;
//     Node *temp = head->next;
//     head->next = head->next->next;
//     delete (temp);
//     return head;
// }

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(5);
    Node *temp2 = new Node(20);
    Node *temp3 = new Node(15);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = head;
    printList(head);
    head = deleteNode(head, 1);
    printList(head);
    return 0;
}