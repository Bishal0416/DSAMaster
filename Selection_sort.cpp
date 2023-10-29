#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr) {
    int size = arr.size();
    for(int i = 0; i < size; i++){
        int min = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "After selection sort: " << "\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
  vector<int> arr = {13,46,24,52,20,9};
  int n = arr.size();
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selectionSort(arr);
  return 0;
}