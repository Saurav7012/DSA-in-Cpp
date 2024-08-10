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

    //insert at any given position.

    int pos = 3;

    if(pos == 0)
    {
        //linked list doesn't exist.
        if(head == NULL)
        {
            head = new Node(30);
        }   
        else
        {
            Node *temp = new Node(30);
            temp -> next = head;
            head -> prev = temp;
            head = temp;
        }
    }

    else
    {
        // go to the node after which i have to insert.
        Node *curr = head;

        while(--pos)
        {
            curr = curr -> next;
        }

        if(curr -> next == NULL)
        {
            Node *temp = new Node(30);
            temp -> prev = curr;
            curr -> next = temp;
        }

        else
        {
            Node *temp = new Node(30);
            temp -> next = curr -> next;
            temp -> prev = curr;
            curr -> next = temp;
            temp -> next -> prev = temp;
        }

    }
    
    //print the values
    Node *trav = head;

    while(trav)
    {
        cout<<trav -> data<<" ";
        trav = trav -> next;
    }
}