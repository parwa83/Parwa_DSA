class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        map<int,int> freq;   //Records frequency of each element (key:value)->(Number:Occurance)
        vector<int> ans;
        for(int i=0;i<n1;i++)
            freq[nums1[i]]++;
        for(int i=0;i<n2;i++)
            freq[nums2[i]]++;
        for(auto &it: freq)
            ans.push_back(it.first);
        return ans;

    }
};