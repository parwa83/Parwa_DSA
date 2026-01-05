#include<iostream>
using namespace std;
int p(int arr[],int low,int high)
{
      int pivot=arr[low];
      int i=low;
      int j=high;
      while(i<j)
      {
        while(arr[i]<=pivot && i<high)  i++;  //this while loop finds first element greater than pivot from left side
        while(arr[j]>=pivot && j>low)  j--;   //this while loop finds first element smaller than pivot from right side
        if(i<j)
           swap(arr[i],arr[j]);
      }
      swap(arr[low],arr[j]);
      return j;
}
void QS(int arr[],int low,int high)
{
    int pivot;
    if(low<high)
    {
        pivot=p(arr,low,high);   //this function p, Sets pivot element in its correct postion, that is all smaller than it in left and greater than it in right
        QS(arr,low,pivot-1);
        QS(arr,pivot+1,high);
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    QS(arr,0,n-1);

    for (int i = 0; i < n; i++)
        cout<< arr[i]<<" ";
}