#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int s)
    {
        size = s;
        arr = new int[s];
        front = 0;
        rear = 0;
    }
    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Full " << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (front == rear)
        {
            cout << "Deque" << endl;
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
    int first()
    {
        return front == rear ? -1 : arr[front];
    }

    bool isEmpty()
    {
        return front == 0 && rear == 0;
    }

    int length()
    {
        return rear - front;
    }

    ~Queue()
    {
        delete[] arr; // Destructor to free memory
    }
};
int main()
{
    Queue q(6);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Size : " << q.length() << endl;
    q.dequeue();
    cout << "Size : " << q.length() << endl;
    q.dequeue();
    cout << "Size : " << q.length() << endl;
    q.dequeue();
    cout << "Size : " << q.length() << endl;

    if (q.isEmpty())
    {
        cout << "Queue is Empty " << endl;
    }
    else
    {
        cout << "Queue is Not Empty " << endl;
    }

    return 0;
}