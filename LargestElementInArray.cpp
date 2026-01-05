class Solution {
public:
    int largestElement(vector<int>& nums) {
           
        int n=nums.size();
        int count;
        int max=0;
        for(int i=0;i<n;i++)
        {
             if(nums[i]>max)
                max=nums[i];
        }
        return max;
    }
};