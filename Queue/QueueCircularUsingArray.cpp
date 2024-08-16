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
        return (rear+1)%size == front;
    }

    void push(int x)
    {
        if(isEmpty())
        {
            front = 0;
            rear = 0;
            arr[0] = x;
        }
        else if(isFull())
        {
            cout<<"Queue Overflow"<<endl;
        }
        else
        {
            rear = (rear+1) % size;
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
                front = (front+1) % size;
            }
        }
    }

    int start()
    {
        return arr[front];
    }
};

int main()
{
    // Create a queue of size 5
    Queue q(5);

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // Try to push into a full queue
    q.push(60); // This should print "Queue Overflow"

    // Display the front element
    cout << "Front element: " << q.start() << endl;

    // Pop some elements from the queue
    q.pop();
    q.pop();

    // Display the front element again
    cout << "Front element after two pops: " << q.start() << endl;

    // Push more elements
    q.push(60);
    q.push(70);

    // Display the front element again
    cout << "Front element after pushing 60 and 70: " << q.start() << endl;

    // Empty the queue
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();  // This should print "Queue Underflow"

    return 0;
}