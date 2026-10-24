class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int low = 0;


        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] < minK ||nums[i] > maxK){
                low = i + 1;
            }
            ans += i - low + 1;
        }
        return ans;
    }
};