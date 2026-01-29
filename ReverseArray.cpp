#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    cout<<"Array before reverse:"<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=0;
    int l=n-1;
    while(k<l)
    {
        swap(arr[k],arr[l]);
        k++;
        l--;
    }
    cout<<"Array after reverse:"<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}
