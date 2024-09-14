#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isCircular(Node *&head)
{

    // Base
    if (head == NULL)
    {
        return true;
    }

    if (head->next == NULL)
    {
        return false;
    }

    // S tep : 1

    Node *temp = head->next;
    int count = 0;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }
    else
    {

        return false;
    }
}

int main()
{
    Node *node = NULL;
    Node *head = node;
    int k = 2;

    insertAtHead(head, 3);
    insertAtHead(head, 7);
    insertAtHead(head, 8);
    insertAtHead(head, 11);
    insertAtHead(head, 16);
    insertAtHead(head, 14);
    print(head);

    bool value = isCircular(head);
    if (value)
    {
        cout << " Circular" << endl;
    }
    else
    {
        cout << "Not  Circular" << endl;
    }
    /*
    14 16 11 8 7 3
    16 14 8 11 3 7
    */
    return 0;
}