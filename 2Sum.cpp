#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> ans;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }

            }
        }
        return ans;
    }
};

int main()
{
    Solution O;
    vector <int> nums;
    vector <int> jawab;
    int input=0;
    int target;
    cout<<"Enter array elements:\n";
    while(input!=-1)
    {
        cin>>input;
        if(input==-1)
          break;
        nums.push_back(input);
    }
    cout<<"Enter target:";
    cin>>target;
    jawab=O.twoSum(nums,target);
    cout<<jawab[0]<<" "<<jawab[1]<<endl;
    return 0;
}