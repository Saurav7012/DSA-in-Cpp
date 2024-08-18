#include <iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class Deque
{
    Node *front;
    Node *rear;

    public:

    Deque()
    {
        front = NULL;
        rear = NULL;
    }

    void push_front(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp -> next = front;
            front -> prev = temp;
            front = temp;
            return;
        }
    }

    void push_back(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            return;
        }
        else
        {
            Node *temp = new Node(x);
            rear -> next = temp;
            temp -> prev = rear;
            rear = temp;
            return;
        }
    }

    void pop_front()
    {
        if(front == NULL)
        {
            return;
        }
        else
        {
            Node *temp = front;
            front = front -> next;
            delete temp;

            if(front)
            {
                front -> prev = NULL;
            }
            else
            {
                rear = NULL;
            }
        }
    }

    
    void pop_back()
    {
        if(front == NULL)
        {
            return;
        }
        else
        {
            Node *temp = rear;
            rear = rear -> prev;
            delete temp;

            if(rear)
            {
                rear -> next = NULL;
            }
            else
            {
                front = NULL;
            }
        }
    }

    int start()
    {
        if(front == NULL)
        {
            return -1;
        }
        else
        {
            return front -> data;
        }
    }

    int end()
    {
        if(front == NULL)
        {
            return -1;
        }
        else
        {
            return rear -> data;
        }
    }
};