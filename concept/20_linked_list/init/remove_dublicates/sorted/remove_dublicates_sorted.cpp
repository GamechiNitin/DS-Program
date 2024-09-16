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

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        tail = tail->next;
    }
}

Node *removeDublicates(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    // NON EMPTY LIST

    Node *current = head;
    Node *temp = head;

    while (current != NULL)
    {
        if (current->next != NULL && current->data == current->next->data)
        {
            Node *next = current->next->next;
            Node *deleteNode = current->next;
            delete deleteNode;
            current->next = next;
        }
        else
        {
            current = current->next;
        }
    }

    return head;
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

int main()
{
    Node *node = NULL;
    Node *head = node;
    Node *tail = node;

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);

    print(head);
    removeDublicates(head);
    print(head);

    return 0;
}