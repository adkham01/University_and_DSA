#include <bits/stdc++.h>

using namespace std;

void f(int i, int arry[], int n)
{
    if(i >= n/2) return;
    swap(arry[i], arry[n-i-1]);
    f(i+1, arry, n);
}

int main()
{
    int l;
    cout << "Enter the length of array : ";
         cin >> l;
    int arry[l];

    for(int i = 0; i < l; i++)
    {
        cout << "Enter elements of array : ";
        cin >> arry[i];
    }
    f(0,arry,l);
    for(int i = 0; i < l; i++)
    {
        cout << arry[i] << "\t";
    }

    delete arry;
    return 0;
}
