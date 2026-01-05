#include<iostream>
using namespace std;
void BS(int arr[],int n){
    if(n==1) return;
    int flag=0;
     for(int i=0;i<n-1;i++) 
    {
        if(arr[i]<arr[i+1])
           continue;
        swap(arr[i],arr[i+1]);
        flag=1;
    }
    if(flag==0) return;
    else BS(arr,n-1);
 
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    BS(arr,n);
    for(int i=0;i<n;i++)
       cout<<arr[i];
    cout<<endl;

}