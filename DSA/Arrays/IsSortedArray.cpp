#include <bits/stdc++.h>

using namespace std;

bool isSortedArray(int arr[], int length){
    int next = arr[0];
    for(int i = 1; i < length; i++){
        if(arr[i] < next){
            return false;
        }
        next = arr[i-1];
    }
    return true;
}

int main(){
    int arr[] = {12, 35, 1, 10, 34, 56, 1};
    cout << isSortedArray(arr, 8);
}