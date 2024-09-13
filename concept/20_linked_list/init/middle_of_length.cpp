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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free : " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    Node *temp = head;
    int count = 1;
    // start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    // Delete First Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        Node *current = head;
        Node *previous = NULL;
        int count = 1;
        while (count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }

        previous->next = current->next;
        if (previous->next == NULL)
        {
            tail->next = previous->next;
            tail = previous;
        }

        current->next = NULL;
        delete current;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node *midOptimize(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    if (head->next->next == NULL)
    {
        return head->next;
    }
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
    // cout << mid + 1 << endl;
}

void getMid(Node *head)
{
    int length = getLength(head);
    cout << length << endl;

    int mid = (length / 2);
    cout << mid + 1 << endl;

    int count = 0;
    Node *temp = head;
    while (count < mid)
    {
        temp = temp->next;
        count++;
    }

    cout << temp->data << endl;
    cout << mid + 1 << endl;
}

int main()
{
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;

    insertAtTail(tail, 12);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    insertAtTail(tail, 16);
    insertAtTail(tail, 17);
    insertAtTail(tail, 18);
    insertAtTail(tail, 19);
    insertAtTail(tail, 20);

    print(head);
    getMid(head);

    cout << endl
         << "----------------" << endl;
    Node *result = midOptimize(head);
    cout << result->data;
}