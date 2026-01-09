class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n;
        int k;           
        n=nums.size();
        int i=1;      //Searches for that distinct element
        k=0;         //Maintains the index for distinct element
        while(i<n)
        {
           if(nums[k]!=nums[i])    //If distinct found
           {
             k++;                  //Makes place for distinct
             nums[k]=nums[i];      //Places it in its correct position
           }
              i++;                //Till distinct not fount ++
        }
        return (k+1);
        
    }
};