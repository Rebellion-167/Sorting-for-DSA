// Given an array of size n, sort the array using Merge Sort.
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp; // temporary array to store the sorted one

    // using pointers
    int left = low;
    int right = mid + 1;

    // Checking whether the arrays are exhausted
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Adding left-overs
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Adding values back to the original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low]; //[i-low] since low is not always 0
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    // base case
    if (low == high)
        return;

    int mid = (low + high) / 2;

    // Dividing the array into two halves
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    // Merging the two halves after sorting
    merge(arr, low, mid, high);
}

int main()
{
    int n;//size of array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr;//array to store the numbers

    //Adding elements to the array
    cout << "Enter elements into the array : ";
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    //Performing the Merge Sort 
    mergeSort(arr,0,arr.size()-1);

    //Printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}