#include <iostream>
using namespace std;

class kQueue
{
public:
    int n, k, freespot;
    int *front;
    int *rear;
    int *arr;
    int *next;

    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1; // Initialize rear to -1
        }
        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1; // End of free list
        arr = new int[n];
        freespot = 0; // The first free index
    }

    void enqueue(int data, int qn)
    {
        if (qn < 1 || qn > k)
        {
            cout << "Invalid queue number" << endl;
            return;
        }

        if (freespot == -1)
        {
            cout << "No Space" << endl;
            return;
        }

        int index = freespot;   // Get the free index
        freespot = next[index]; // Update freespot

        // If this is the first element in the queue
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index; // Set front to the new index
        }
        else
        {
            next[rear[qn - 1]] = index; // Link new element
        }

        next[index] = -1;     // Mark the end of the queue
        rear[qn - 1] = index; // Update rear to the new index
        arr[index] = data;    // Store the data
    }

    int dequeue(int qn)
    {
        if (qn < 1 || qn > k)
        {
            cout << "Invalid queue number" << endl;
            return -1; // Indicate error
        }

        if (front[qn - 1] == -1)
        {
            cout << "Queue is empty" << endl;
            return -1; // Indicate empty queue
        }

        // Get index to pop
        int index = front[qn - 1];
        front[qn - 1] = next[index]; // Move front to the next element
        next[index] = freespot;      // Recycle the freed index
        freespot = index;            // Update freespot
        return arr[index];           // Return the popped element
    }

    void display(int qn)
    {
        if (qn < 1 || qn > k)
        {
            cout << "Invalid queue number" << endl;
            return;
        }

        if (front[qn - 1] == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue " << qn << ": ";
        int index = front[qn - 1];
        while (index != -1)
        {
            cout << arr[index] << " ";
            index = next[index]; // Move to the next element
        }
        cout << endl;
    }
};

int main()
{
    kQueue q(10, 3); // Create 3 queues of size 10

    // Test enqueue
    q.enqueue(10, 1);
    q.enqueue(20, 1);
    q.enqueue(30, 2);
    q.enqueue(40, 2);
    q.enqueue(50, 3);

    // Display the queues
    q.display(1);
    q.display(2);
    q.display(3);

    // Test dequeue
    cout << "Dequeued from Queue 1: " << q.dequeue(1) << endl;
    cout << "Dequeued from Queue 2: " << q.dequeue(2) << endl;

    // Display the queues after dequeuing
    q.display(1);
    q.display(2);
    q.display(3);

    return 0;

    /*
    Time Complexity:
    Enqueue: O(1)
    Dequeue: O(1)
    Display: O(n/k) for one queue or O(n) for all.
    Space Complexity: O(n + k)


    o/p
    Queue 1: 10 20
    Queue 2: 30 40
    Queue 3: 50
    Dequeued from Queue 1: 10
    Dequeued from Queue 2: 30
    Queue 1: 20
    Queue 2: 40
    Queue 3: 50
    */
}
