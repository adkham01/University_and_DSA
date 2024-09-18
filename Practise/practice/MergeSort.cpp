#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high);

void mS(vector<int> &arr, int low, int high)
{
    if (low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n)
{
    mS(arr, 0, n - 1);
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

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

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

int main()
{
    // int arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    vector<int> arr = {3, 2, 4, 1, 3};  // Use vector instead of an array

    mergeSort(arr, arr.size() - 1);  // Pass the size of the vector

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
