
class Solution {
public:
void helper(vector<int>& candidates, int target,vector<int>ans,vector<vector<int>>&final,int idx)
{
    if(target==0)
    {
        final.push_back(ans);
        return;
    }
    if(target<0)
    {
        return;
    }
    for(int i=idx; i<candidates.size();i++)
    {
        if(i>idx && candidates[i]==candidates[i-1]) continue;
        ans.push_back(candidates[i]);
        helper(candidates,target-candidates[i],ans,final,i+1);
        ans.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ans;
        vector<vector<int>>final;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,ans,final,0);
        return final;
        
    }
};
