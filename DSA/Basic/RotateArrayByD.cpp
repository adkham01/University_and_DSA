#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

int main()
{
    int arr[] = {13, 46, 52, 20, 9, 24};
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    leftRotate(arr, 6, 3);
    cout << endl;

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }

}
