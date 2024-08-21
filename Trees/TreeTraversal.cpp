#include <iostream>
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

void preOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root -> data<<" ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void inOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root -> left);
    cout<<root -> data<<" ";
    inOrder(root -> right);
}


void postOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root -> data<<" ";
}

Node* BinaryTree()
{
    int x;
    cin>>x;

    if(x == -1)
    {
        return NULL;
    }

    Node *temp = new Node(x);

    cout<<"Enter the left child of "<<x<<" : ";
    temp -> left = BinaryTree();

    cout<<"Enter the right child of "<<x<<" : ";
    temp -> right = BinaryTree();

    return temp;

}

int main()
{
    cout << "Enter the root Node : ";
    Node *root = BinaryTree();

    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}