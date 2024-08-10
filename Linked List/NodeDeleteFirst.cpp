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

    //Delete a Node at Start

    if(head!=NULL)
    {
        Node *temp = head;
        head = head -> next;
        delete temp;
    }

    //print the values
    
    Node *temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}