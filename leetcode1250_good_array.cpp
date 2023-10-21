// benzuoit identity if gcd of a and b=d then there always exist x and y such that a*x+b*y=d
class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int n=nums.size();
        int a=nums[0];
        for(int i=1;i<n;i++)
        {
            a=gcd(a,nums[i]);
        }
        return a==1;  
    }
};
