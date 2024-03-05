#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
int i = 0;
for(int j = 0; j < n; j++){
  if (arr[i] != arr[j]) {
    arr[i + 1] = arr[j];
    i++;
  }
}
return i+1;

}
int main()
{
    vector<int> arr1 = {1, 8, 8, 8, 55, 99, 75};
    int n = 7;
    int ans = removeDuplicates(arr1, n);
    cout << ans;
    return 0;
}