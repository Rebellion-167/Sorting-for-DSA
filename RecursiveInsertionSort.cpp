//Given an array of N integers, write a program to implement the Recursive
// Insertion Sort algorithm.

// Now, in the recursive approach, we will just select the element recursively
// instead of using any loop. This is the only change we will do the recursive
// insertion sort algorithm and the rest of the part will be completely the same
// as it was in the case of iterative insertion sort.

// The approach will be the following:

// First, call the recursive function with the given array, the size of the
// array, and the index of the selected element(let's say i). Inside that
// recursive function, take the element at index i from the unsorted array.
// Then, place the element in its corresponding position in the sorted
// part(using swapping). After that, Shift the remaining elements accordingly.
// Finally, call the recursion increasing the index(i) by 1. The recursion will
// continue until the index reaches n(i.e. All the elements are covered). Base
// Case: if(i == n) return;

#include <bits/stdc++.h>
using namespace std;

void recursiveInsertionSort(vector<int> &arr, int i, int n)
{
    //Base case
    if(i == n) return;

    int j = i;
    while(j > 0 && arr[j-1] > arr[j])
    {
        swap(arr[j-1], arr[j]);
        j--;
    }

    recursiveInsertionSort(arr,i+1,n);
}

int main()
{
    int n;//to store the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr;

    cout<< "Enter elements in the array : ";
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

    recursiveInsertionSort(arr,0,n);

    cout << "After sorting : ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}