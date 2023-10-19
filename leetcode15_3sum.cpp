class Solution {
public:
int n;
vector<vector<int>>ans;
void f(vector<int>&nums,int i)
{
    int low=i+1;
    int high=n-1;
    while(low<high)
    {
        if(nums[i]+nums[low]+nums[high]==0)
        {
            ans.push_back({nums[i],nums[low],nums[high]});
            low++;
            while(low<high && nums[low]==nums[low-1]) low++;
        }
        else if(nums[i]+nums[low]+nums[high]<0) low++;
        else high--;
    }
}
    vector<vector<int>> threeSum(vector<int>& nums) {
         n=nums.size();
         sort(nums.begin(),nums.end());
         for(int i=0;i<n && nums[i]<=0;i++)
         {
             if(i==0 || nums[i]!=nums[i-1])
             {
                 f(nums,i);
             }
         }
         return ans;
        
    }
};
