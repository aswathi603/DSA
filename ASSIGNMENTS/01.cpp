#include <iostream>
#include <vector>
using namespace std;

class ArrayOperations {
private:
    vector<int> arr;

public:
    void insert(int index, int value) {
        if (index < 0 || index > arr.size()) {
            cout << "Insertion failed: Invalid index." << endl;
            return;
        }
        arr.insert(arr.begin() + index, value);
        displayArray();
    }

    void deleteElement(int index) {
        if (index < 0 || index >= arr.size()) {
            cout << "Deletion failed: Invalid index." << endl;
            return;
        }
        arr.erase(arr.begin() + index);
        displayArray();
    }

    void update(int index, int value) {
        if (index < 0 || index >= arr.size()) {
            cout << "Update failed: Invalid index." << endl;
            return;
        }
        arr[index] = value;
        displayArray();
    }

    void displayArray() {
        cout << "Current Array: ";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }

    void populateArray() {
        int size;
        cout << "Enter the number of elements to populate the array: ";
        cin >> size;

        cout << "Enter " << size << " integers:" << endl;
        for (int i = 0; i < size; ++i) {
            int value;
            cin >> value;
            arr.push_back(value);
        }
        displayArray();
    }
};

int main() {
    ArrayOperations arrayOps;
    arrayOps.populateArray();

    int choice, index, value;

    while (true) {
        cout << "\nMenu:\n1. Insert\n2. Delete\n3. Update\n4. Exit\nChoose an operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter index and value to insert: ";
                cin >> index >> value;
                arrayOps.insert(index, value);
                break;
            case 2:
                cout << "Enter index to delete: ";
                cin >> index;
                arrayOps.deleteElement(index);
                break;
            case 3:
                cout << "Enter index and new value to update: ";
                cin >> index >> value;
                arrayOps.update(index, value);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
