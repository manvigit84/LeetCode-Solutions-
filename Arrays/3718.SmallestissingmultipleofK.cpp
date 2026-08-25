class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_set<int> s;

        for(int x : nums){
            s.insert(x);

        }
        int n = nums.size();
        for(int i=1; i<=n+1 ; i++){
            int multiple = k * i;

            if(s.find(multiple) == s.end())
            return multiple;
        }
        return -1;
    }
};