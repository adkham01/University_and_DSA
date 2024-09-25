#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int arr[], int length){
    int next = 1; 
    for(int i = 0; i < length; i++){
        if(arr[i] != arr[next]){
            arr[i+1] = arr[next];
            next++;
        }
    }
    return next + 1;
} 

int main(){
    int arr[] = {12, 35, 1, 10, 34, 56, 1};
    cout << removeDuplicates(arr, 8);
}