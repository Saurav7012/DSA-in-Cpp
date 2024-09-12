#include <iostream>
using namespace std;

class MinHeap
{
    public:
    int *arr;
    int size;
    int total_size;

    MinHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
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

        while(index > 0 && arr[index] < arr[(index-1)/2])
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
        arr[0] = arr[size-1];
        size--;

        heapify(0);
    }

    void heapify(int index)
    {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if(left < size && arr[left] < arr[smallest])
        {
            smallest = left;
        }

        if(right < size && arr[right] < arr[smallest])
        {
            smallest = right;
        }

        if(smallest != index)
        {
            swap(arr[smallest], arr[index]);
            heapify(smallest);
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
    MinHeap h1(6);

    h1.insert(20);
    h1.insert(43);
    h1.insert(67);
    h1.insert(19);
    h1.Delete();
    h1.print();
}