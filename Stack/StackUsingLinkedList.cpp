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

class Stack
{
    Node *top;
    int size;

    public:

    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int value)
    {

        Node *temp = new Node(value);
        temp -> next = top;
        top = temp;
        size++;
        cout<<value<<" is pushed."<<endl;
    }
    

    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            Node *temp = top;
            top = top -> next;
            cout<<temp -> data<<" is popped."<<endl;
            delete temp;
            size--;
        }
    }

    void peek()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty";
        }
        else
        {
            cout<<"top element is "<< top -> data<<"."<<endl;
        }
    }

    void isSize()
    {
        cout<<"Size is "<<size<<"."<<endl;
    }

    void isEmpty()
    {
        if(top == NULL)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<"Stack is not empty"<<endl;
        }
    }
};

int main()
{
    Stack S;

    S.push(6);
    S.push(7);
    S.push(8);
    S.pop();
    S.isSize();
    S.peek();
    S.isEmpty();
}