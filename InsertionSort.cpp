//Given an array of N integers, 
//write a program to implement the Insertion sorting algorithm.
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            //While previous value is larger than the current value
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
        //Not doing j >= 0 since j-1 becomes -1 which is invalid
    }
}

int main()
{
    int n;//to store the number of elements

    cout << "Enter the value of n : ";
    cin >> n;

    int arr[n];//array to store the elements

    //Accepting values into the array
    cout << "Enter the values : ";
    int i;//loop variables
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    //Implementing the Insertion Sort Algorithm
    insertion_sort(arr,n);

    //Printing the sorted array
    cout << "The sorted array : ";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}