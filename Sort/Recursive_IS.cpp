#include<iostream>
using namespace std;
void IS(int arr[], int i, int n) {

    if (i == n) return;

    int j = i;
    while (j >= 0 && arr[j+1] < arr[j]) {
        swap(arr[j+1],arr[j]);
        j--;
    }

    IS(arr, i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    IS(arr,0,n-1);
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    cout<<endl;

}