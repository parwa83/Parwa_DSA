#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
//selection sort i.e find the minimum and swap it with first index and in 
//next iteration swap it with 2nd index and so on
    for(int i=0;i<=n-2;i++)  // or i<n-1 is same as i<=n-2, as sorting till n-2 makes n-1(<n) already sorted
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
             if(arr[j]<arr[min])
               min=j;
        }
        swap(arr[min],arr[i]);
    }
     for (int i = 0; i < n; i++)
        cout<< arr[i]<<" ";
     cout<<endl;
}
