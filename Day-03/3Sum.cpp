class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> res;
        if(nums.size() <= 2)
        {
            return res;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue;
            int p1 = i+1, p2 = nums.size()-1;
            while(p1 < p2)
            {
                if((nums[i] + nums[p1] + nums[p2]) > 0)
                {
                    p2--;
                }
                else if((nums[i] + nums[p1] + nums[p2]) < 0)
                {
                    p1++;
                }
                else{
                    res.push_back({nums[i], nums[p1], nums[p2]});
                    p1++; p2--;
                    
                    while(p1 < p2 && nums[p1] == nums[p1-1])
                    {
                        p1++;
                    }
                    while(p1 < p2  && nums[p2] == nums[p2+1])
                    {
                        p2--;
                    }
                }
            }
        }
        return res;
    }
};