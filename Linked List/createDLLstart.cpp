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

int main()
{
    Node *head = NULL;

    int arr[] = {1,2,3,4,5};

    for(int i=0 ;i<5; i++)
    {
        if(head == NULL)
        {
            head = new Node(arr[i]);
        }

        else
        {
            Node *temp = new Node(arr[i]);
            temp -> next = head;
            head -> prev = temp;
            head = temp;
        }
    }

    Node *trav = head;

    while(trav)
    {
        cout<<trav -> data<<" ";
        trav = trav -> next;
    }
}
