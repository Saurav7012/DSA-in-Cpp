#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Reverse Linked List

class ListNode
{
    public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

//This is the required code

ListNode* reverseLinkedList(ListNode *head)
{
    vector<int>ans;
    ListNode *temp = head;

    while(temp!=NULL)
    {
        ans.push_back(temp -> val);
        temp = temp -> next;
    }
    int i = ans.size()-1;
    temp = head;

    while(temp!=NULL)
    {
        temp -> val = ans[i];
        i--;
        temp = temp -> next;
    }

    return head;
}

ListNode* createLinkedList(int arr[], int index, int size)
{
    if(index == size)
    {
        return NULL;
    }

    ListNode *temp = new ListNode(arr[index]);
    temp -> next = createLinkedList(arr, index+1, size);
    return temp;
}    

int main()
{
    ListNode *head, *tail;
    tail = head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
    head = createLinkedList(arr, 0, 5);

    ListNode* reverseLinkedList(head);

    //print the values

    ListNode *temp;
    temp = head;

    while(temp)
    {
        cout<<temp->val<<" ";
        temp = temp -> next;
    }
}