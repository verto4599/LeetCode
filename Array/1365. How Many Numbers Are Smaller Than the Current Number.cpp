 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101);
        vector<int> ans(nums.size());
        
        for(int i=0;i<nums.size();i++)
            count[nums[i]]++;
        
        for(int i=1;i<=100;i++)
        {
            count[i]+=count[i-1];
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                ans[i]=0;
            else
                ans[i]=count[nums[i]-1];
        }
        return ans;
        
    }
