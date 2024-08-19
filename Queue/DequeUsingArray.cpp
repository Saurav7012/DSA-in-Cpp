#include <iostream>
using namespace std;

class Deque
{
    int front, rear, size;
    int *arr;

    public:

    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear+1)%size == front;
    }

    void push_front(int x)
    {
        if(isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }
        else if(isFull())
        {
            return;
        }
        else
        {
            front = (front-1+size)%size;
            arr[front] = x;
        }
    }    

    void push_back(int x)
    {
        if(isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }
        else if(isFull())
        {
            return;
        }
        else
        {
            rear = (rear+1)%size;
            arr[rear] = x;
        }
    }

    void pop_front()
    {
        if(isEmpty())
        {
            return;
        }
        else
        {
            if(front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front+1)%size;
            }
        }
    }

    void pop_back()
    {
        if(isEmpty())
        {
            return;
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
                rear = (rear-1+size)%size;
            }
        }
    }

    int start()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int end()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
};