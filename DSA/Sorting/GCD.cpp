#include <bits/stdc++.h>

using namespace std;
int gcd(int,int);
int stackOverFlow(int);

int main()
{
    int a, b;
    cout << "Enter the number that you want to know gcd : ";
    cin >> a >>b;
    int gcdn = gcd(a,b);
    cout << "Your gcd = "<<gcdn;

    return 0;
}
int gcd(int a, int b)
{
    int gcd;

    while(a > 0 && b > 0)
    {
        if(a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    if(a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int stackOverFlow(int i)
{
    return stackOverFlow(i);
}


