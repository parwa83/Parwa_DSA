#include<iostream>
using namespace std;

int main() {
    int flag=0;
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //Bubble Sort it Pushes largest element to last in every pass in
    //bubble/pair fasion
    for(int j=0;j<n-1;j++)
    {
       for(int i=0;i<n-j-1;i++) //n-j-i so arr[i+1] does't goes out of bound when i=n.
       {
          if(arr[i]<arr[i+1])
             continue;
          swap(arr[i],arr[i+1]);
          flag=1;
          cout<<"runs\n";
       }
       if(flag==0)
         break;
    }

     for (int i = 0; i < n; i++)
        cout<< arr[i];
}