//Given an array of N integers, write a program 
//to implement the Bubble Sorting algorithm.
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    int i,j,temp;
    for(i=n-1;i>=1;i--)
    {
        for(j=0;j<=i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;//to store the number of elements
    
    cout << "Enter the value of n : ";
    cin >> n;

    int arr[n];//array to store the elements

    int i,j,temp;

    //Accepting values from the user
    cout << "Enter the values : ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    //Implementing the Bubble Sort algorithm
    bubble_sort(arr,n);

    //Printing the sorted array
    cout << "The sorted array is ";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}