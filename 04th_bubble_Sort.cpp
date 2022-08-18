#include <iostream>
#include <stdlib.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            for (int h = 0; h < 6; h++)
            {
                cout<< arr[h]<<"  ";
            }
            cout<<endl;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[6];
    for (int l = 0; l < 6; l++)
    {
        cin >> arr[l];
    }
    bubbleSort(arr, 6);
    for (int h = 0; h < 6; h++)
    {
        cout << endl
             << arr[h];
    }

    cout << endl;
    return 0;
}