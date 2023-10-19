class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 &&  nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                long long tsum=(long long)(target)-(long long)(nums[i]+nums[j]);
                int low=j+1;
                int high=n-1;
                while(low<high)
                {
                    if(nums[low]+nums[high]==tsum)
                    {
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        low++;
                        while(low<high && nums[low]==nums[low-1]) low++;
                    }
                    else if(nums[low]+nums[high]<tsum) low++;
                    else high--;
                }

            }
        }
        return ans;
        
    }
};
