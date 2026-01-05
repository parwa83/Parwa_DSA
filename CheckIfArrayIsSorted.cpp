class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
			int n=nums.size();
			for(int i=0;i<n-1;i++)
			{
				if(nums[i+1]<nums[i])
				   return false;
			}
			return true;
		}
};