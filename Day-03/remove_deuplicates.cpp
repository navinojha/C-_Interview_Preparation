class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        if(n < 2){
            return n;
        }
        int first = 0, second = 1;
        while(first < n && second <n)
        {
            if(nums[first] == nums[second]){
                second++;
            }else {
                first++;
                nums[first] = nums[second];
                second++;
            }
        }
        return first+1;
    }
};
