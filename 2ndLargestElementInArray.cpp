class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int max=0;
        int smax=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
            {
                smax=max;
                max=nums[i];
            }

            else if(nums[i]>smax  && nums[i]!=max)
            {
                smax=nums[i];
            }
        }
        if(smax==0) return -1;
        return smax;
    }
};