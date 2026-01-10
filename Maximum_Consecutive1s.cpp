#include<iostream>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count1=0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                count1++;
            } 
            else 
            {
                temp=count1;
                count1=0;
            }
        }
        return max(temp,count1);
    }
};

int main()
{
    Solution O;
    vector <int> nums;
    int input=0;
    int ans;
    cout<<"Enter binary elements:\n to stop enter '-1'";
    while (input!=-1)
    {
        cin>>input;
        if(input==-1)
          break;
        nums.push_back(input);
    }
    ans=O.findMaxConsecutiveOnes(nums);
    cout<<"Maximum consecutive 1's are:"<<ans<<endl;
    return 0;
}