#include <iostream>
#include <stdlib.h>
using namespace std;
void printSubarraySum(int arr[],int n){
    int sum=0;
    for (int k = 0; k < n; k++)
    {
        sum =0;
        for (int l = k; l < n; l++)
        {
            sum +=arr[l];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int arr[10];
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
for (int  i = 0; i < 10; i++)
{
    cin>>arr[i];
}
printSubarraySum(arr,10);

    cout << endl;
    return 0;
}