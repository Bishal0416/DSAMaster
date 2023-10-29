#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&arr) {
    int size = arr.size();
    for (int i = 0; i <= size - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    cout << "After insertion sort: " << "\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
  vector<int> arr = {13,46,24,52,20,9};
  int n = arr.size();
   cout << "Before insertion sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  insertionSort(arr);
  return 0;
}