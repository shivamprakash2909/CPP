#include <iostream>
using namespace std;

class minHeap
{
public:
    int capacity;
    int *harr;
    int heapSize;

    minHeap(int c)
    {
        capacity = c;
        heapSize = 0;
        harr = new int[c];
    }

    void insert(int key)
    {
        if (heapSize == capacity)
        {
            cout << "Heap Overflow\n";
            return;
        }
        heapSize++;
        harr[heapSize - 1] = key;
        int index = heapSize - 1;
        int parent = (index - 1) / 2;
        while (index != 0 && harr[index] < harr[parent])
        {
            swap(harr[index], harr[parent]);
            index = parent;
            parent = (index - 1) / 2;
        }
    }

    void print()
    {
        for (int i = 0; i < heapSize; i++)
        {
            cout << harr[i] << " ";
        }
        cout << endl;
    }
    void heapify(int index)
    {
        int lc = index * 2 + 1;
        int rc = index * 2 + 2;
        while (index < heapSize && harr[index] > harr[lc] || harr[index] > harr[rc])
        {
            int mini;
            if (harr[lc] < harr[rc])
            {
                mini = lc;
            }
            else
            {
                mini = rc;
            }
            swap(harr[index], harr[mini]);
            index = mini;
            lc = index * 2 + 1;
            rc = index * 2 + 2;
            if (lc >= heapSize || rc >= heapSize)
            {
                break; // Avoid accessing out of bounds
            }
        }
    }
    void deleteFromHeap(int index)
    {
        if (index < 0)
        {
            cout << "Invalid index\n";
            return;
        }
        if (index >= heapSize)
        {
            cout << "Index out of bounds\n";
            return;
        }
        harr[index] = harr[heapSize - 1];
        heapSize--;
        heapify(index);
    }
};

int main()
{
    minHeap h1(10);
    h1.insert(3);
    h1.insert(2);
    h1.insert(15);
    h1.insert(5);
    h1.insert(4);
    h1.insert(45);
    h1.insert(12);
    h1.print();
    h1.deleteFromHeap(0);
    h1.print();
}