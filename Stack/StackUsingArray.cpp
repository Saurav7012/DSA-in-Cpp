#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

    public:

    bool flag;

    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;             // stack empty
    }

    void push(int value)
    {
        if(top == size - 1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            arr[top] = value;
            flag = 0;
            cout<<value<<" is pushed"<<endl;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            cout<<arr[top]<<" is popped"<<endl;
            top--;
        }
    }

    int peek()
    {
        if(top == -1)
        {
            flag = 1;
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int isSize()
    {
        return top+1;
    }
};

int main()
{
    Stack s(5);
    s.push(3);
    s.push(4);
    s.push(-2);
    
    int value = s.peek();
    if(s.flag == 0)
    {
        cout<<value<<endl;
    }
    cout<<s.isEmpty();
}