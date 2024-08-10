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

Node* createLinkedList(int arr[], int index, int size)
{
    if(index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp -> next = createLinkedList(arr, index+1, size);
    return temp;

}
int main()
{
    Node *head, *tail;
    tail = head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
    head = createLinkedList(arr, 0, 5);

    //Delete a Node at particular point

    int X = 5;

    if(X == 1)
    {
        Node *temp = head;
        head = head -> next;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        X--;

        while(X--)
        {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        delete curr;
    }
    
    //print the values
    
    Node *temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}