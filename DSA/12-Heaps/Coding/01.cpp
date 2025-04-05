#include <iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void heapify(int arr[], int n, int i) {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[left] > arr[largest]) { // Fixed comparison for Max Heap
            largest = left;
        }
        if (right <= n && arr[right] > arr[largest]) { // Fixed comparison for Max Heap
            largest = right;
        }

        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    void buildHeap(int arr[], int n) {
        for (int i = n / 2; i >= 1; i--) { // Start from last non-leaf node
            heapify(arr, n, i);
        }
    }

    void heapSort(int arr[],int n){
        buildHeap(arr,n);

        for(int i=n;i>1;i--){
            swap(arr[1],arr[i]);
            heapify(arr,i-1,i);
        }

        /*
        int size=n;

        while(size>1)
        {
            swap(arr[1],arr[i]);
            heapify(arr,)
        
        }
        
        */
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletion() {
        if (size == 0) {
            return;
        }

        // Replace root with last node
        arr[1] = arr[size]; // Fixed assignment

        // Remove last element
        size--;

        // Heapify from the root
        int i = 1;
        while (i <= size) { // Fixed condition
            int leftIndx = 2 * i;
            int rightIndx = 2 * i + 1;

            if (leftIndx <= size && arr[i] < arr[leftIndx]) { // Fix condition
                swap(arr[i], arr[leftIndx]);
                i = leftIndx;
            } else if (rightIndx <= size && arr[i] < arr[rightIndx]) { // Fix condition
                swap(arr[i], arr[rightIndx]);
                i = rightIndx;
            } else {
                return;
            }
        }
    }
};

int main() {
    heap h;
    h.insert(20);
    h.insert(9);
    h.insert(18);
    h.insert(40);
    h.insert(23);
    h.insert(2);
    h.insert(13);

    cout << "Heap before deletion: ";
    h.print();

    h.deletion();

    cout << "Heap after deletion: ";
    h.print();

    int arr[] = {-1, 4, 10, 3, 5, 1}; // One-based index, arr[0] ignored
    int n = 5; // Number of elements

    h.buildHeap(arr, n); // Correct way to call buildHeap

    cout << "Heapified Array: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
