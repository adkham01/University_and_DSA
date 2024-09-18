#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {13, 46, 52, 20, 9, 24};

    for(int i = 5; i >= 0; i--)
    {
        for(int j = 0; j <= i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }

        }
    }
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
