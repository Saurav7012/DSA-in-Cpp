#include <iostream>
using namespace std;

//Insert Node at the beginning using recursion

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

Node* createLinkedList(int arr[], int index, int size, Node *prev)
{
    if(index == size)
    {
        return prev;
    }

    Node *temp = new Node(arr[index]);
    temp -> next = prev;
    return createLinkedList(arr, index+1, size, temp);

}
int main()
{
    Node *head, *tail;
    tail = head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
    head = createLinkedList(arr, 0, 5, NULL);

    //print the values

    Node *temp;
    temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}