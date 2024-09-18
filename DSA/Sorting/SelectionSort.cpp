#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bublleSort(int arr[], int n)
{
    for(int i = n-1; i >= 0; i--)
    {
        int didSwap = 0;
        for(int j = 0; j <= i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
    // Best time complexity is O of N
    // Worst and average O(n2)
}

void insertionSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }

    // Best time complexity is O of N
    // Worst and average O(n2)
}
int main()
{
    int n;
    cout << "Enter the length of the array : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter "<< i+1<< " element of the array ";
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
