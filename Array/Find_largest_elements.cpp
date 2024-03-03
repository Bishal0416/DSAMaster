#include <bits/stdc++.h> 
using namespace std;

int largestElement(vector<int> &arr, int n) {
    // Write your code here.

    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    vector<int> arr1 = {2,5,1,3,0};
    int n = 5;
    int max = largestElement(arr1, n);
    cout << "The largest element in the array is: " << max << endl;
    return 0;
}