#include <iostream>
#include <map>
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
            this->next == NULL;
        }

        cout << " Value deletem" << value << endl;
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

Node *findNode(Node *head, int value)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node *floydDetectLoop(Node *head)
{

    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            // cout << "Element " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node *startPoint(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection = floydDetectLoop(head);

    if (intersection == NULL)
        return NULL;

    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;

        if (slow == intersection)
        {
            return slow;
        }
    }

    return NULL;
}

int main()
{

    // Q - Detect LOOP or Cycle using map
    // Node *node = NULL;s
    Node *node = new Node(1);

    Node *head = node;
    Node *tail = node;
    insertAtTail(tail, 3);
    insertAtTail(tail, 9);
    insertAtTail(tail, 4);
    insertAtTail(tail, 2);
    insertAtTail(tail, 6);
    insertAtTail(tail, 7);
    print(head);

    // To Add LOOP or Cycle

    Node *node2 = findNode(head, 9);
    Node *node7 = findNode(head, 7);

    if (node2 != NULL && node7 != NULL)
    {
        node7->next = node2;
    }

    /*
    1 -> 3 -> 9 -> 4 -> 2 -> 6 -> 7

    7 -> 4
    */

    // Check is loop

    bool result = floydDetectLoop(head);
    if (result)
    {
        cout << "Loop present" << endl;
        Node *element = startPoint(head);
        cout << "Loop present at : " << element->data << endl;
    }
    else
    {
        cout << "Loop absent" << endl;
    }

    // print(head);
    return 0;
}