class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int n = nums.size();

        int minn = 0, maxx = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] < nums[minn])
                minn = i;

            if(nums[i] > nums[maxx])
                maxx = i;
        }

        int left = min(minn, maxx);
        int right = max(minn, maxx);

        int ans = min({
            right + 1,
            n - left,
            left + 1 + n - right
        });

        return ans;
    }
};