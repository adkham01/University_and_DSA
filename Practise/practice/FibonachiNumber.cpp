#include <bits/stdc++.h>

using namespace std;

int f(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
    {
        int last = f(n-1);
        int slast = f(n-2);
        return last+slast;
    }
}

int main()
{
    int n;
    cout << "Enter the number that you want to know fibonachi : ";
    cin >> n;
    int total = f(n);
    cout << total;

    return 0;
}
