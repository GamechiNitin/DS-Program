#include <iostream>
using namespace std;

// Class definition for a Node in the linked list
class Node
{
public:
    int data;   // Data part of the node
    Node *next; // Pointer to the next node in the list

    // Constructor to initialize a node with data and set next pointer to NULL
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // Destructor to clean up the memory
    ~Node()
    {
        int value = this->data; // Store the data for printing
        // If the next node exists, delete it recursively
        if (this->next != NULL)
        {
            delete next; // Recursively deletes the next node
            this->next = NULL;
        }
        // Print a message when the node is deleted
        cout << "Memory is free : " << value << endl;
    }
};

// Function to insert a new node at the end (tail) of the linked list
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d); // Create a new node with the given data
    tail->next = temp;        // Point the current tail's next to the new node
    tail = tail->next;        // Update the tail to point to the new node
}

// Function to print all nodes in the linked list
void print(Node *&head)
{
    Node *temp = head;   // Start from the head of the list
    while (temp != NULL) // Traverse until the end of the list
    {
        cout << temp->data << " "; // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
    cout << endl; // Print a newline at the end of the list
}

void recursion(Node *&head, Node *&current, Node *&prev)
{
}
// Function to reverse the linked list
Node *reverseLL(Node *head)
{
    // Base
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *smallHead = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    return smallHead;
}

int main()
{
    Node *node = new Node(1); // Create the head node with data 1
    Node *head = node;        // Initialize head pointer
    Node *tail = node;        // Initialize tail pointer

    // Insert nodes at the end of the list
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    insertAtTail(tail, 6);

    // Print the original list
    print(head);

    // Reverse the linked list
    Node *result = reverseLL(head);

    // Print the reversed list
    print(result);

    // Clean up memory
    delete result; // This will delete the reversed list
}
