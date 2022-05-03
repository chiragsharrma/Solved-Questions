class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums)
    {
        vector<int> chk;
            chk = nums;
        int low = INT_MAX, high = INT_MIN;
        sort(chk.begin(),chk.end());
        
        if(chk == nums)
            return 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!= chk[i])
            {
                low = min(low,i);
                high = max(high,i);
            }
        }
        return high - low + 1;
    }
    // return len ;
};