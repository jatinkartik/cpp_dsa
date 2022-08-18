#include <iostream>
#include <stdlib.h>
using namespace std;
int minIndexWithRepeating(int a[], int n)
{
    int num = 1e6 + 2;
    int idx[num];
    int mindix = INT16_MAX;
    for (int i = 0; i < num; i++)
    {
        idx[i] = -1;
    }

    for (int j = 0; j < n; j++)
    {
        if (idx[a[j]] != -1)
        {
            mindix = min(mindix, idx[a[j]]);
        }
        else
        {
            idx[a[j]] = j;
        }
    }
    // for (int k = 0; k < n; k++)
    // {
    //     if (idx[a[k]] != -1)
    //     {
    //         mindix = min(mindix, idx[a[k]]);
    //     }
    // }
    if(mindix==INT16_MAX){
        return -1;
    }
    return mindix;
}
int main()
{
    int a[10];
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int mindix = minIndexWithRepeating(a, 10);
    cout << endl
         << " the minimum index with repeating element is : - " << mindix;

    cout << endl;
    return 0;
}