class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++)
        {
            if(ans.empty()) ans.push_back(intervals[i]);
            else
            {
                vector<int>&v=ans.back();
                if(intervals[i][0]<=v[1])  v[1]=max(v[1],intervals[i][1]);
                else ans.push_back(intervals[i]);
            }
        }
        return ans;
        
    }
};
