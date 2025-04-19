//Given an array of N integers, write a program to implement the Recursive
//Selection Sort algorithm.

#include <bits/stdc++.h>
using namespace std;

void recursiveSelectionSort(vector<int> &arr, int beginIndex, int size)
{
    if(beginIndex >= size-1) return;

    int minIndex = beginIndex;
    for(int i=beginIndex;i<size;i++)
    {
        if(arr[i] < arr[minIndex])
            minIndex = i;
        }
    
    swap(arr[beginIndex], arr[minIndex]);

    recursiveSelectionSort(arr,beginIndex+1,size);
}

int main()
{
    int n;//to store the number of elements
    cout << "Enter the number of elements : ";
    cin >> n;

    vector<int> arr;//array to store the elements

    cout << "Enter elements into the array : ";
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

    recursiveSelectionSort(arr,0,n);

    cout << "After sorting : ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}