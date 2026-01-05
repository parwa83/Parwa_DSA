#include<iostream>
using namespace std;
#include<vector>
class Solution
{
    public:
      void Merge(vector<int>&nums,int low,int high,int mid)
      {
        vector<int> temp;

        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high)
        {
            if(nums[left]<nums[right])
             {
                temp.push_back(nums[left]);
                left++;
             }
            else
            {
                temp.push_back(nums[right]);
                right++;
            }

        }
        while(left<=mid)temp.push_back(nums[left++]);
        while(right<=high)temp.push_back(nums[right++]);

        for(int i=low;i<=high;i++)
            nums[i]=temp[i-low];
      }

      void MergeSort(vector<int> &nums,int low,int high)
      {
        if(low>=high) return;
        int mid=low+(high-low)/2;
         MergeSort(nums,low,mid);
         MergeSort(nums,mid+1,high);
         Merge(nums,low,high,mid);
      }
};
int main()
{
    Solution sol;
    int n;
    vector<int> v;
    cout<<"Enter size\n";
    cin>>n;
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    sol.MergeSort(v,0,n-1);
    cout << "Sorted array:\n";

    for (int i=0;i<n;i++) 
    {
            cout << v[i] << " ";
            cout << endl;
    }
    return 0;
}