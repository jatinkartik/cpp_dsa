#include <iostream>
#include <stdlib.h>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int arr[6], key;
    for (int k = 0; k < 6; k++)
    {

        // cout<<"Enter the element "<<k<<": - ";
        cin >> arr[k];
    }
    // cout<<"Enter the element you want to search : - ";
    cin >> key;
    cout << endl
         << linearSearch(arr, 6, key);

    cout << endl;
    return 0;
}
