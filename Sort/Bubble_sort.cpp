#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr) {
    int size = arr.size();
    int temp=0;
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(arr[i]>arr[j]){
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                }
            }
        }
    cout << "After bubble sort: " << "\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
  vector<int> arr = {13,46,24,52,20,9};
  int n = arr.size();
   cout << "Before bubble sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  bubbleSort(arr);
  return 0;
}