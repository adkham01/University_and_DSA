#include <bits/stdc++.h>

using namespace std;

int largest(int arr[], int l)
{
    int larg = arr[0];
    for(int i = 0; i < l; i++)
    {
        if(larg < arr[i])
        {
            larg = arr[i];
        }
        cout << arr[i] << "\t";
    }
    cout << endl;
    return larg;
}
int sLargestB(int arr[], int l)
{
    int sl = -1;
    int larg = largest(arr, l);
    for(int i = 0; i < l; i++)
    {
        if(arr[i] > sl && arr[i] != larg)
        {
            sl = arr[i];
        }
    }
    // 14
    return sl;
}
int sLargestO(int arr[], int l)
{
    int sl = -1;
    int larg = arr[0];
    for(int i = 0; i < l; i++)
    {
        if(arr[i] > larg)
        {
            sl = larg;
                 larg = arr[i];
        }
        else if(arr[i] < larg && arr[i] > sl)
        {
            sl = arr[i];
        }
    }
    //14
    return sl;
}
int main()
{
    int larg;
    int slarg;
    int arr[] = {96, 5, 23, 6, 84, 1, 65, 12};
    cout << sLargestB(arr, 7);
}
