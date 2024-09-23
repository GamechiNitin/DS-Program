#include <iostream>
using namespace std;

class CircularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    CircularQueue(int s)
    {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~CircularQueue()
    {
        delete[] arr; // Release the allocated memory
    }

    bool enqueue(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is full" << endl;
            return false;
        }
        else if (front == -1)
        { // If the queue is empty
            front = rear = 0;
            arr[rear] = data; // Store data
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;         // Wrap around
            arr[rear] = data; // Store data
        }
        else
        {
            rear++;
            arr[rear] = data; // Store data
        }
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1; // Indicate queue is empty
        }

        int ans = arr[front];
        arr[front] = -1; // Optional: clear the dequeued position

        if (front == rear)
        {
            front = rear = -1; // Queue becomes empty
        }
        else if (front == size - 1)
        {
            front = 0; // Wrap around
        }
        else
        {
            front++;
        }
        return ans;
    }
};

int main()
{
    CircularQueue cq(5); // Create a queue of size 5
    cq.enqueue(10);
    cq.enqueue(20);
    cout << "Dequeued: " << cq.dequeue() << endl;
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60); // Should indicate that the queue is full
    cout << "Dequeued: " << cq.dequeue() << endl;

    return 0;
}
