class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n= nums.size();
        int ans = 0 ;

        for(int i=0; i<n; i++)
        { ans ^= nums[i];
         }
         unsigned int DiffBit = ans & -(unsigned int)ans;        
        int a = 0;
        int b = 0;

        
        for(int i=0; i<n; i++){
            if((nums[i] & DiffBit) == 0){
                a^= nums[i];
            }
            else
            b ^= nums[i];
        }

        return {a,b};
    }
};