#include <iostream>
using namespace std;

//Insert Node at particular position using recursion

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

    int X = 3;
    int value = 30;

    Node *temp = head;
    X--;  //(X-1) Moves

    while(X--)
    {
        temp = temp -> next;
    }

    Node *temp2 = new Node(value);
    temp2 -> next = temp -> next;
    temp -> next = temp2;

    //print the values
    
    temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}