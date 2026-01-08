class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int n=nums.size();
        //Basic Idea is to first store all the non zero elements in an temp array,
        //Then fill remaining places with 0.
        //BruteForce
        // int temp[n];
        // int k=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //     temp[k]=nums[i];
        //     k++;
        //     }

        // }
        // while(k<n)
        // {
        //     temp[k]=0;
        //     k++;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     nums[i]=temp[i];
        // }

        //Basic Idea is to first shift all the non zero elements to the starting,
        //Then fill remaining places with 0, No extra array temp required.
        //Optimal Approach
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        while(k<n)
        {
            nums[k++]=0;
        }
    }
};