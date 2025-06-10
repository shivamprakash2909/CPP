#include <iostream>
using namespace std;
#include <vector>

class maxHeap
{
public:
    int capacity;
    int *harr;
    int heapSize;

    maxHeap(int n)
    {
        capacity = n;
        heapSize = 0;
        harr = new int[n];
    }
    void insert(int key)
    {
        if (heapSize == capacity)
        {
            cout << "Heap Overflow\n";
            return;
        }
        // step1: Increase the size of heap array
        heapSize++;
        // step2: Insert value at the end of the heap
        harr[heapSize - 1] = key;
        // step3: heapify the max heap
        int index = heapSize - 1;
        int parent = (index - 1) / 2;
        while (index != 0 && harr[parent] < harr[index])
        {
            swap(harr[parent], harr[index]);
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
        int lc = (2 * index) + 1;
        int rc = (2 * index) + 2;
        while (index < heapSize && harr[index] < harr[lc] || harr[index] < harr[rc])
        {
            int maxi;
            if (harr[lc] > harr[rc])
            {
                maxi = lc;
            }
            else
            {
                maxi = rc;
            }

            swap(harr[index], harr[maxi]);
            index = maxi;
            lc = (2 * index) + 1;
            rc = (2 * index) + 2;
        }
    }
    void deleteFromHeap(int index)
    {
        // cout << harr[heapSize - 1] << endl;
        harr[index] = harr[heapSize - 1];
        // cout << harr[index] << endl;
        heapSize--;
        heapify(index);
    }
};

int main()
{

    maxHeap h1(10);
    h1.insert(3);
    h1.insert(2);
    h1.insert(15);
    h1.insert(5);
    h1.insert(4);
    h1.insert(45);
    h1.insert(25);
    h1.insert(22);
    h1.print();
    h1.deleteFromHeap(2);
    cout << endl;
    h1.print();
    return 0;
}