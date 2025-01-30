#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        bool hasSwapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                hasSwapped=true;
            }
        }
        if(hasSwapped==false)break;
    }
}

int main()
{
    int n = 6;
    int arr[n] = {4, 2, 6, 8, 7, 3};

    cout<<"Before Bubble Sort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort(arr, n);

    cout << "After Bubble Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
