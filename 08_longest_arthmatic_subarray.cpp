#include <iostream>
#include <stdlib.h>
using namespace std;
int longestArthmaticSubarray(int arr[], int n)
{
    int currDiff = INT32_MIN;
    int currcount = 2, maxcount = 0;
    currDiff = arr[0] - arr[1];
    for (int i = 0; i < n - 1; i++)
    {
        if (currDiff == (arr[i] - arr[i + 1]))
        {
            currcount++;
        }
        else
        {
            currcount = 2;
            currDiff = arr[i] - arr[i + 1];
        }
        cout << currDiff << " ";
        maxcount = max(currcount, maxcount);
    }
    return maxcount;
}
int main()
{
    int arr[7];
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    longestArthmaticSubarray(arr, 7);
    int var = longestArthmaticSubarray(arr, 7);
    cout << endl
         << var;
    // cout<<endl<<"sum of the longest subarray : - "<<longestArthmaticSubarray(arr,7);
    cout << endl;
    return 0;
}