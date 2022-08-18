#include <iostream>
#include <stdlib.h>
using namespace std;
void maxTillN(int arr[], int n)
{
    int mx = INT8_MIN;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] > mx)
        {
            mx = arr[k];
        }
        cout << mx << " ";
    }
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
    maxTillN(arr, 10);
    cout<<endl<<INT8_MIN;
    cout << endl;
    return 0;
}