#include <bits/stdc++.h> 
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> v;
    int largest = a[0], slargest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(slargest < a[i] && a[i] < largest) slargest = a[i];
    }
    v.push_back(slargest);
    int smallest = a[0], ssmallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] < smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(ssmallest > a[i] && a[i] != smallest) ssmallest = a[i];
    }
    v.push_back(ssmallest);
    return v;
}

int main(){
    vector<int> arr1 = {2,5,1,3,0};
    int n = 5;
    vector<int> ans = getSecondOrderElements(n,arr1);
    cout << "The Second largest element in the array is: " <<ans[0] <<endl<<"The Second smallest element in the array is: "<<ans[1]<<  endl;
    return 0;
}