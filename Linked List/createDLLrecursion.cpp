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

Node* createDLL(int arr[], int index, int size, Node *back)
{
    if(index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp -> prev = back;
    temp -> next = createDLL(arr, index+1, size, temp);
    return temp;
}

int main()
{
    int arr[] = {1,2,3,4,5};

    Node *head = NULL;

    head = createDLL(arr, 0, 5, NULL);

    Node *trav = head;

    while(trav)
    {
        cout<<trav -> data<<" ";
        trav = trav -> next;
    }
}