#include <iostream>
#include <stdlib.h>
using namespace std;
int recordBreakingDay(int arr[], int n)
{
    int record = 0,maxnum = arr[0];
    if (arr[0] > arr[1])
    {
        record++;
    }
    for (int i = 1; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1] && (arr[i] > arr[i - 1]) && arr[i]>maxnum)
        {
            record++;
        }
        maxnum = max(maxnum,arr[i]);
    }
    return record;
}
int main()
{
    int arr[10];
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int num = recordBreakingDay(arr, 10);
    cout << endl
         << "The number of record breaking array is : - " << num << endl;
    cout << endl;
    return 0;
}