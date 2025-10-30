#include<iostream>
#include<vector>
using namespace std;
void BS(int arr[],int n);
void IS(int arr[],int i,int n);
void SS(int arr[],int i,int n);
void MergeSort(int arr[],int start,int end);
void Merge(int arr[],int start,int mid,int end);
int main()
{
    int n;
    cout<<"Enter array size\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //selection sort
    // for(int i=0;i<n;i++)
    // {
    //     int min=i;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[j]<arr[min])
    //            min=j;
    //     }
    //     swap(arr[i],arr[min]);
    // }

    //Bubble Sort
    // int flag=1;
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-j-1;j++)
    //     {
    //        if(arr[j]<arr[j+1])
    //           continue;
    //         swap(arr[j],arr[j+1]);
    //         flag=0;
    //     }
    //     if(flag==1) break;
    // }

    //Insertion Sort
    //  for(int i=0;i<n-1;i++)
    //  {
    //     int j=i;
    //     while(j>=0 && arr[j+1]<arr[j])    //3<8     8>3
    //     {
    //         swap(arr[j+1],arr[j]);
    //         j--;
    //     }
    //  }

    //BS(arr,n);
    //IS(arr,0,n-1);
    // SS(arr,0,n-1);
     
    MergeSort(arr,0,n-1);
    

     cout<<"Sorted array is\n";
     for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
     return 0;
}
// void BS(int arr[],int n)      //Recursive Bubble Sort
// {
//     if(n==1)  return;
//     int flag=1;
//         for(int j=0;j<n-1;j++)
//         {
//             if(arr[j]<arr[j+1])
//               continue;
//             swap(arr[j],arr[j+1]);
//             flag=0;
//         }
//         if(flag==1)
//            return;
//         else
//           BS(arr,n-1);
   
// }

// void IS(int arr[], int i, int n) {      //Recursive Insertion Sort

//     if (i == n) return;

//     int j = i;
//     while (j >= 0 && arr[j+1] < arr[j]) {
//         swap(arr[j+1],arr[j]);
//         j--;
//     }

//     IS(arr, i + 1, n);
// }

// void SS(int arr[],int i,int n)     //Recursive Selection Sort
// {
//     if(i==n) return;
//     int min=i;
//     for(int j=i+1;j<=n;j++)
//     {
//        if(arr[j]<arr[min])
//           min=j;
//     }
//     swap(arr[i],arr[min]);
//     SS(arr,i+1,n);
          
// }
void MergeSort(int arr[],int start,int end){
    if(start<end)
    {
    int mid=start+(end-start)/2;
    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);
    Merge(arr,start,mid,end);
    }
}
void Merge(int arr[],int start,int mid,int end)
{
    vector<int> temp;
    int i=start;
    int j=mid+1;
    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    if(i>mid)
    {
        while(j<=end)
        {
          temp.push_back(arr[j]);
          j++;
        }
    }
    else
    {
        while(i<=mid)
        {
          temp.push_back(arr[i]);
          i++;
        }
    }
    for(int idx=0;idx<temp.size();idx++)
       arr[idx+start]=temp[idx];
}