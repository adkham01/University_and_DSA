#include <bits/stdc++.h>

using namespace std;

int secondLargest(int arr[], int length){
    int fl = 0;
    int sl = -1;
    for(int i = 0; i < length; i++){
        if(arr[i] > fl && sl != fl){
            sl = fl;
            fl = arr[i]; 
        }
    }

    return sl;
}

int main(){
    int arr[] = {12, 35, 1, 10, 34, 56, 1};

    cout << "Second largest element is "<< secondLargest(arr, 8);

    return 0;
}