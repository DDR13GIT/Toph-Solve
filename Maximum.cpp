/******************************************
*  Author: Debopriya Deb Roy  
*  File : c++ file
*******************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, k, l, m, n;
    cin >> i;
    array<int,100> arr;
     for (k = 0; k < i; k++)
    {
        cin >> arr[k];
    }
    auto max = max_element(arr.begin(), arr.begin()+i);
    cout << *max;
    return 0;
}