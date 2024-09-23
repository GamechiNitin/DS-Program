#include <iostream>
using namespace std;

class DEQ
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    DEQ(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~DEQ()
    {
        delete[] arr; // Release allocated memory
    }

    bool push_front(int data)
    {
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else if (front == 0)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
        return true;
    }

    int pop_front()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1; // Optional: clear value for debugging
        if (front == rear)
        {
            front = rear = -1; // Queue is now empty
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }

    bool push_rear(int data)
    {
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else if (rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
        return true;
    }

    int pop_rear()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1; // Optional: clear value for debugging
        if (front == rear)
        {
            front = rear = -1; // Queue is now empty
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
        return ans;
    }

    int getFront()
    {
        return isEmpty() ? -1 : arr[front];
    }

    int getRear()
    {
        return isEmpty() ? -1 : arr[rear];
    }

    bool isEmpty()
    {
        return front == -1; // Returns true if the queue is empty
    }

    bool isFull()
    {
        return (front == 0 && rear == size - 1) || (rear + 1 == front);
    }
};

int main()
{
    DEQ deq(5);
    deq.push_rear(10);
    deq.push_front(20);
    cout << "Front: " << deq.getFront() << endl; // 20
    cout << "Rear: " << deq.getRear() << endl;   // 10
    deq.pop_front();
    cout << "Front after pop: " << deq.getFront() << endl; // 10

    /*
    Front: 20
    Rear: 10
    Front after pop: 10
    */
    return 0;
}
