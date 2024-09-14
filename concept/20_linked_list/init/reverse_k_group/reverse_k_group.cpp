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

Node *reverseGroup(Node *&head, int k)
{

    // Base
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // S tep : 1
    Node *next = NULL;
    Node *previous = NULL;
    Node *current = head;
    int count = 0;

    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
        count++;
    }

    if (next != NULL)
    {

        head->next = reverseGroup(next, k);
    }

    return previous;
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
    Node *result = reverseGroup(head, k);
    print(result);
    /*
    14 16 11 8 7 3
    16 14 8 11 3 7
    */
    return 0;
}