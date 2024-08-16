#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear, size;

    public:

    Queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return rear == size - 1;
    }

    void push(int x)
    {
        if(isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }
        else if(isFull())
        {
            cout<<"Queue Overflow"<<endl;
        }
        else
        {
            rear += 1;
            arr[rear] = x;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Queue Underflow"<<endl;
        }
        else
        {
            if(front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front += 1;
            }
        }
    }

    int start()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue Q(5);

    Q.push(5);
    Q.push(10);
    Q.push(15);

    cout << "Start of the queue: " << Q.start() << endl; // Should print 5

    Q.pop();
    cout << "Start of the queue after pop: " << Q.start() << endl; // Should print 10

    Q.push(20);
    cout << "Start of the queue: " << Q.start() << endl; // Should still print 10

    Q.pop();
    Q.pop();
    Q.pop();  // Queue should be empty now
    cout << "Start of the queue after popping all elements: " << Q.start() << endl; // Should print "Queue is empty"

    return 0;
}
