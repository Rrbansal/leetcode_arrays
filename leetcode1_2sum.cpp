class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x=target-nums[i];
            if(m.find(x)!=m.end())
            {
                ans.push_back(m[x]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                m[nums[i]]=i;
            }
        }
        return ans;
        
    }
};
