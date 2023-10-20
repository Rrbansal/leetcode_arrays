class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int i;
        int prev[n];
        int next[n];
        int mini[n];
        int max=height[0];
        // to find prev greatest element
        for(i=0;i<n;i++)
        {
            prev[i]=max;
            if(max<height[i]) max=height[i];
        }
        max=height[n-1];
        // next greatest element
        for(i=n-1;i>=0;i--)
        {
            next[i]=max;
            if(height[i]>max) max=height[i];
        }
       // find min of both
       for(int i=0;i<n;i++)
       {
           mini[i]=min(prev[i],next[i]);
       }
       int water=0;
       for(int i=1;i<n-1;i++)
       {
           if(height[i]<mini[i])
           {
               water+=(mini[i]-height[i]);
           }
       }
       return water;

        
    }
};
