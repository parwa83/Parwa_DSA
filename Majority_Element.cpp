//My basic naive approach:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxCount=0;
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            count=0;
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                  count++;
            }
            if(count>maxCount)
            {
                maxCount=count;
                ans=nums[i];
            }
        }
        return (ans);
    }
};

//Using Map:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        map <int,int> M;
        for(int i=0;i<n;i++)
            M[nums[i]]++;        //Counting frequency of each element
        for(auto &it : M)
        {
           if(it.second>ans)
             ans=it.second;     //finding the max frequency
        }
        for(auto &it : M)
        {
           if(it.second==ans)
             return it.first;     //finding the elemnt opposite to max frequency.
        }
        return 0;
    }
};

//Optimal Approach using Moore's Voting approach,
//Moore’s Voting Algorithm (very basic)
// Keep a candidate and a count.
// Same element → count++, different → count--; when count == 0, change candidate.
// The final candidate is the majority element (appears > n/2 times).
//“We cancel different elements; the majority element cannot be cancelled fully.”
// Time: O(n) Space: O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = 0;
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(count == 0)
                candidate = nums[i];

            if(nums[i] == candidate)
                count++;
            else
                count--;
        }

        return candidate;
    }
};
