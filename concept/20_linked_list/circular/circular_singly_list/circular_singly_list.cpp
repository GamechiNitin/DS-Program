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

void insertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);

        temp->next = temp;
        tail = temp;
    }
    else
    {

        Node *current = tail;

        while (current->data != element)
        {
            current = current->next;
        }

        if (current->data == element)
        {
            Node *temp = new Node(d);
            temp->next = current->next;
            current->next = temp;
        }
    }
}

void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << " No data" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *current = prev->next;

        while (current->data != value)
        {
            prev = current;
            current = current->next;
        }

        prev->next = current->next;
        // Element Length = 1
        if (current == prev)
        {
            tail = NULL;
        }

        // Element Length >= 2
        if (tail == current)
        {
            tail = prev;
        }
        current->next = NULL;
        delete current;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "No data";
        return;
    }
    else
    {

        do
        {
            cout << tail->data << " ";
            tail = tail->next;
        } while (tail != temp);
        cout << endl;
    }
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 8);
    print(tail);
    insertNode(tail, 8, 10);
    print(tail);
    insertNode(tail, 10, 15);
    print(tail);

    // Middle
    insertNode(tail, 8, 9);
    print(tail);

    // Delete - Middle
    deleteNode(tail, 8);
    print(tail);
    // Delete
    deleteNode(tail, 7);
    print(tail);

    return 0;
}