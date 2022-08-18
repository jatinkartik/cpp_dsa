#include<iostream>
#include<stdlib.h>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int curr = arr[i];
        int j = i -1;
        while(arr[j]>curr&& j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[6];
    for (int l = 0; l < 6; l++)
    {
        cin >> arr[l];
    }
insertionSort(arr,6);
for(int i = 0;i<6;i++){
    cout<<endl<<arr[i];
}
cout<<endl;
return 0;
}