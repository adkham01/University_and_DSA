#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {13, 46, 52, 20, 9, 24};

    for(int i = 0; i < 6; i++)
    {
        int j = i;
        while(j > 0 && (arr[j - 1] > arr[j]))
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
