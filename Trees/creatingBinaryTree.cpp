#include <iostream>
#include <queue>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    queue<Node *>q;

    int x, first, second;

    cout<<"Enter the root element : ";
    cin>>x;
    Node *root = new Node(x);
    q.push(root);

    //Build the binary tree

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        //left Node

        cout<<"Enter the first child of "<<temp -> data<<" : ";
        cin>>first;

        if(first!=-1)
        {
            temp -> left = new Node(first);
            q.push(temp -> left);
        }

        //right Node

        cout<<"Enter the second child of "<<temp -> data<<" : ";
        cin>>second;

        if(second!=-1)
        {
            temp -> right = new Node(second);
            q.push(temp -> right);
        }
    }

    return 0;
}
