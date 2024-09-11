#include <iostream>
using namespace std;

class MaxHeap
{
    public:
    int *arr;
    int size;
    int total_size;

    MaxHeap(int n)
    {
        arr = new int[n];
        total_size = n;
        size = 0;
    }

    void insert(int value)
    {
        if(size == total_size)
        {
            cout<<"Heap overflow";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        while(index > 0 && arr[index] > arr[(index-1)/2])
        {
            swap(arr[index], arr[(index-1)/2]);
            index = (index-1)/2;
        }

        cout<<value<<" is inserted into the heap"<<endl;
    }

    void Delete()
    {
        if(size == 0)
        {
            cout<<"Heap underflow";
            return;
        }

        cout<<arr[0]<<" is deleted from the heap"<<endl;

        arr[0] = arr[size - 1];
        size--;

        heapify(0);
    }

    void heapify(int index)
    {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if(left < size && arr[left] > arr[largest])
        {
            largest = left;
        }

        if(right < size && arr[right] > arr[largest])
        {
            largest = right;
        }

        if(largest != index)
        {
            swap(arr[index], arr[largest]);
            heapify(largest);
        }
    }

    void print()
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" "; 
        }
        cout<<endl;
    }
};

int main()
{
    MaxHeap h1(6);

    h1.insert(4);
    h1.insert(14);
    h1.insert(11);
    h1.print();
    h1.Delete();
    h1.print();
    
}