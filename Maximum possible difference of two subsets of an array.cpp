// Online C++ compiler to run C++ program online
// Maximum possible difference of two subsets of an array
#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;
unordered_map<int,int>p;
unordered_map<int,int>ne;
int sum1=0,sum2=0;
int x;
int f(vector<int>&nums)
{
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0) p[nums[i]]++;
        if(nums[i]<0) ne[nums[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0 && p[nums[i]]==1)
        {
            sum1+=nums[i];
        }
        if(nums[i]<0 && ne[nums[i]]==1)
        {
            sum2+=(nums[i]);
        }
    }
    return sum1-sum2;
}
int main() {
    vector<int>nums={2,5,-3,-1,5,7};
     cout<<f(nums);
}
