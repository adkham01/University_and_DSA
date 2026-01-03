#include <bits/stdc++.h>

using namespace std;

void rotate(int nums[], int k, int size){
    int m = nums[0];
    for(int i = 0; i < size; i++){
        int temp = nums[i];
        nums[i] = nums[i+1];
        nums[size-1-i] = temp;
    }
    nums[size-1] = m;

    for(int i = 0; i < size; i++){
        cout<< nums[i] << "\t";
    }
    cout << "\n";

}

int main(){
    int arr[] = {12, 35, 1, 10, 34, 56, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    rotate(arr, 3, length);

}