#include <bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int l)
{
    for(int i = 1; i < l; i++)
    {
        if(arr[i-1] > arr[i])
        {
            return false;
        }
    }
    return true;
}
set<int> removeDuplicatesB(int arr[], int l)
{
    set<int> rmd;
    for(int i = 0; i < l; i++)
    {
        rmd.insert(arr[i]);
    }
   return rmd;
}

int main()
{
    int arr1[] = {1, 2, 3, 3, 4};//5
    int arr2[] = {1, 2, 1, 1, 3, 4};//6

    int rmd[] = {1, 1, 2, 2, 2, 3, 3}; //7
    set<int> removedEl = removeDuplicatesB(rmd, 7);
    removeDuplicatesO(rmd, 7);


}
