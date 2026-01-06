class Solution {
public:
     void rotateArr(vector<int>& nums, int k) {
        // code here instead of k+1 use n-k
        int n=nums.size();
        k=k%n;
        int arr[k];
        for(int i=0;i<k;i++)
        {
            arr[i]=nums[i];      //Holding the first k values of nums in arr
        }
        
        int l=k;
        for(int i=0;i<n-k;i++)
        {
            nums[i]=nums[l];       //shifting original array by k places to left
            l++;
        }
        int m=0;
        for(int i=n-k;i<n;i++)
        {
            nums[i]=arr[m];  //Now in nums putting back the arr values after k shifts
            m++;
        }
    }
};