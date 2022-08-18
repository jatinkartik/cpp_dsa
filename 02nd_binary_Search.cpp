#include <iostream>
#include <stdlib.h>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int startPoint = 0;
    int endPoint = n ;
    int midPoint;
    while (startPoint <= endPoint)
    {
        midPoint = (startPoint + endPoint) / 2;
        if (arr[midPoint] == key)
        {
            return midPoint;
        }
        else if (arr[midPoint] > key)
        {
            endPoint = midPoint - 1;
        }
        else
        {

            startPoint = midPoint + 1;
        }
        // cout<<"jatin hello i am here"<<endl;
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n = 6;
    int arr[n];
    for (int k = 0; k < 6; k++)
    {
        cin >> arr[k];
    }
    cout << binarySearch(arr, n, 198);
    // cout<<"hello";
    cout << endl;
    return 0;
}