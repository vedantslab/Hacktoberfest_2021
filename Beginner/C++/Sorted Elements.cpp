int solve(vector<int>& nums) {
    
    if(nums.size()>0)
    {    vector<int> dup;
        dup=nums;
        sort(nums.begin(),nums.end());
        int i,count=0;
        for(i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]==dup[i])
            ++count;
        }
        return count;}
    return 0;
}
