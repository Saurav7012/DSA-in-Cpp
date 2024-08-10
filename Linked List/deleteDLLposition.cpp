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

    //insert at any given position

    int pos = 4;
    Node *curr = NULL;
    
    if(head -> next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        if(pos == 1)
        {
            curr = head;
            head = head -> next;
            delete curr;
        }
        else if(pos == 5)
        {
            curr = head;
            while(curr -> next)
            {
                curr = curr -> next;
            }
            curr -> prev -> next = NULL;
            delete curr;
        }
        else
        {
            curr = head;
            while(--pos)
            {
                curr = curr -> next;
            }
            curr -> prev -> next = curr -> next;
            curr -> next -> prev = curr -> prev;
            delete curr;
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