#include <iostream>
#include <stdlib.h>
using namespace std;
int subArrayWithReqSum(int arr[], int n, int reqsum)
{
    int i = 0, j = 0, start = -1, end = -1, sum = 0;
    while (j < n && sum + arr[j] <= reqsum)
    {
        sum += arr[j];
        j++;
    }
    if (reqsum == sum)
    {
        cout << " start point " << i << " end point " << j - 1 << endl;
    }
    else
    {
        while (j < n)
        {
            sum += arr[j];
            while (sum > reqsum)
            {
                sum -= arr[i];
                i++;
            }
            if (sum == reqsum)
            {
                cout << " start point " << i << " end point " << j  << endl;
                break;
            }

            j++;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    subArrayWithReqSum(arr, N,12);
    cout << endl;
    return 0;
}