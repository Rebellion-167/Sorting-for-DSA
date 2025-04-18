//Given an array of N integers, write a program to implement the Recursive
// Bubble Sort algorithm.

#include <bits/stdc++.h>
using namespace std;

// Recursive Bubble Sort:
// Repeatedly swaps adjacent elements if they are in the wrong order.
// The largest element "bubbles" to the end of the array in each recursive call.
// Base Case: If the size of the array is 1, return.

void recursiveBubbleSort(vector<int> &arr, int endIndex)
{
    if(endIndex<=1) return;

    for(int i=0;i<endIndex-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }

    recursiveBubbleSort(arr,endIndex-1);
}

int main()
{
    int n;//to store the number of elements
    cout << "Enter the number of elements : ";
    cin >> n;

    // if(n==0) {
    //     cout << "Array is empty!" << endl;
    //     return 0;
    // }

    vector<int> arr;//array to store the numbers
    
    cout << "Enter elements in the array : ";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Before sorting : ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    recursiveBubbleSort(arr,n);

    cout << "After sorting : ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
