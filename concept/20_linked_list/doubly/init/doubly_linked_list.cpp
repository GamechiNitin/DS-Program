#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next == NULL;
        }
        cout << "Memory is free : " << value << endl;
    }
};

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

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

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
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    Node *temp = head;
    int count = 1;
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *current = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }

        current->prev = NULL;
        prev->next = current->next;
        current->next = NULL;
        tail = prev;
        delete current;
    }
}

int main()
{
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;

    // cout << node->data << endl; // 10
    // cout << node->prev << endl; // Null
    // cout << node->next << endl; // Null

    cout << "Length is : " << getLength(head) << endl;

    print(head);
    insertAtHead(head, tail, 11);
    print(head);

    insertAtHead(head, tail, 12);
    print(head);
    insertAtHead(head, tail, 13);
    print(head);

    cout << "---insertAtTail ---" << endl;

    insertAtTail(tail, tail, 14);
    print(head);
    insertAtTail(tail, tail, 15);
    print(head);
    insertAtTail(tail, tail, 16);
    print(head);
    insertAtTail(tail, tail, 17);
    print(head);
    cout << "--- insertAtPosition ---" << endl;
    insertAtPosition(head, tail, 5, 9);
    insertAtPosition(head, tail, 1, 20);
    int len = getLength(head);
    cout << len << endl;
    insertAtPosition(head, tail, len + 1, 30);
    print(head);

    cout << "--- deleteNode ---" << endl;

    deleteNode(head, tail, 1);
    print(head);
    cout << "Head :" << head->data << endl; // 10
    cout << "Tail :" << tail->data << endl; // 10
    deleteNode(head, tail, 4);
    print(head);
    cout << "Head :" << head->data << endl; // 10
    cout << "Tail :" << tail->data << endl; // 10
    int len2 = getLength(head);
    cout << len2 << endl;
    deleteNode(head, tail, len2);
    print(head);
    cout << "Head :" << head->data << endl; // 10
    cout << "Tail :" << tail->data << endl; // 10

    return 0;
}