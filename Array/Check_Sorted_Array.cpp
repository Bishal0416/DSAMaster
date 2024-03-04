#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a)
{
    // Write your code he
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    vector<int> arr1 = {1, 8,55, 99, 752};
    int n = 5;
    int ans = isSorted(n, arr1);
    string str = ans?"Array is Sorted":"Array is not sorted";
    cout << str;
    return 0;
}