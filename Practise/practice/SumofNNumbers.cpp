#include <bits/stdc++.h>

using namespace std;

int sumofnNumbersPara(int n, int sum)
{
    if(n < 1)
    return sum;
    sumofnNumbersPara(n-1, sum+n);
}

int sumofnNumbers(int n)
{
    if(n == 0)
    return 0;
    return n + (n-1);
}
int factorial(int n)
{
    if(n == 1)
    return 1;
    return n * (n - 1);
}

        int main()
        {
            int n;
            cout << "Enter the number : ";
            cin >> n;
            cout << "Sum of number " << n << "th is : " << sumofnNumbers(n);



            return 0;
        }
