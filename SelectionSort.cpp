//Given an array of N integers, write a program 
//to implement the Selection sorting algorithm.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;//to store the number of elements in the array
    cout << "Enter the value of n : ";
    cin >> n;

    int arr[n];//array to store the elements

    int i;//loop variable
    //Adding elements in the array
    cout << "Enter the elements in the array : ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int j;//loop variable
    int min;//to store the index of the minimum value
    int temp;//temporary variable

    //Implementing the Selection Sort Algorithm
    for(i=0;i<n-1;i++)
    {
        min = i;//Assuming mininum to be the ith index itself
        for(j=i;j<n;j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp; 
    }

    //Printing the sorted array
    cout << "The sorted array is : ";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}