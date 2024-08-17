#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue
{
    
    Node *front;
    Node *rear;

    public:

    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void push(int x)
    {
        if(isEmpty())
        {
            front = new Node(x);
            rear = front;
        }
        else
        {
            rear -> next = new Node(x);
            rear = rear -> next;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else if(front -> next == NULL)
        {
            delete front;
            front = NULL;
            rear = NULL;  
        }
        else
        {
            Node *temp = front;
            front = front -> next;
            delete temp;
        }
    }

    int start()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        return front -> data;
    }
};

int main()
{
    Queue q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Display the front element
    cout << "Front element is: " << q.start() << endl;

    // Pop an element and display the front element again
    q.pop();
    cout << "Front element after pop is: " << q.start() << endl;

    // Pop all elements to empty the queue
    q.pop();
    q.pop();

    // Try popping from an empty queue to trigger the underflow condition
    q.pop(); // This should print "Queue Underflow"

    // Check the front element when the queue is empty
    cout << "Front element after emptying the queue is: " << q.start() << endl; // This should print "Queue is empty"

    return 0;
}
