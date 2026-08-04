class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        vector<int> ans;
        int n=nums.size();
        
        if(nums.empty())
        return ans; 

        sort(nums.begin() , nums.end());

     for(int i=0; i<n-1; i++)
    {
        int start = nums[i] + 1;
        int end = nums[i+1] - 1;
    

    for(int j=start; j<=end; j++)
    {
        ans.push_back(j);
    }
     
     }
    return ans;
  }
};