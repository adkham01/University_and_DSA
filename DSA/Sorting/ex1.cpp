#include <bits/stdc++.h>

using namespace std;

double result(int x)
{
    double y = (pow(x,3)+7)/((x+4)*(x-3));
    return y;
}

int main()
{
    char answer;
    int x1, x2;
    int negativeCount = 0;
    do
    {
        cout << "Please enter value for the first x : ";
        cin >> x1;
        cout << "Please enter value for the second x : ";
        cin >> x2;

        if(x1 == -4 || x2 == 3)
        {
            cout << "The number is undefined";
            break;
        }
        else
        {
            double result1 = result(x1);
            double result2 = result(x2);


            printf("For x = %d, y = %.2f\n", x1, result1);
            printf("For x = %d, y = %.2f\n", x2, result2);

            if (result1 < result2)
            {
                printf("Value %.2f is smaller than %.2f\n", result1, result2);
            }
            else
            {
                printf("Value %.2f is smaller than %.2f\n", result2, result1);
            }

            if(result1 < 0)
                negativeCount += 1;
            if(result2 < 0)
                negativeCount += 1;
        }

        cout << negativeCount << " times y value is negative\n";
        cout << "Do you want to continue? (Y for yes / N for no): ";
        cin >> answer;

    }
    while(answer == 'y' || answer == 'Y');

    return 0;
}
