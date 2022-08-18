#include <iostream>
#include <stdlib.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int j = 0; j < n-1; j++)
    {
        for (int k = j+1; k < n; k++)
        {
            if (arr[k]<arr[j])
            {
                swap(arr[k],arr[j]);
            }
        }
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr,7);
    for (int m = 0; m < 7; m++)
    {
        cout<<endl<<arr[m];
    }
    

    cout << endl;
    return 0;
}