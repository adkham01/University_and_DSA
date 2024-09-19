#include <bits/stdc++.h>
using namespace std;
void leftrotate1(int arr[], int len)
{
    int temp = arr[0];
    for(int i = 1; i < len; i++)
    {
        arr[i-1] = arr[i];
        if(i == 4)
        {
            arr[i] = temp;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
}

void leftrotate1(int arr[], int len, int rotatenum)
{
    rotatenum %= len;
    int *arry =  new int[rotatenum];
    for(int i = 0; i < rotatenum; i++)
    {
        arry[i] = arr[i];
    }

    for(int i = rotatenum; i < len; i++)
    {
        arr[i-rotatenum] = arr[i];
    }
    int j = 1;
    for(int i = rotatenum; i < len; i++)
    {
        arr[i-j] = arry[j-1];
        j++;
    }
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    cout <<endl;
    delete[] arry;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    leftrotate1(arr, 5, 3);
    //delete[] arr;

}
