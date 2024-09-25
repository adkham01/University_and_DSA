#include <bits/stdc++.h>

using namespace std;

void rotate(int nums[], int k, int size){
    vector<int> v;
    for(int i = size - 1; i <= k; i--){
        v.push_back(nums[i]);
    }

    // for(int i = 0; i < size; i++){
    //     cout << "Nums"<< nums[i] << endl;
    //     v.push_back(nums[i]);
    //     cout << "Vector"<< v[i] << endl;
    //     nums[i] = v[i];
    // }

    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

}

int main(){
    int arr[] = {12, 35, 1, 10, 34, 56, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    rotate(arr, 3, length);

}