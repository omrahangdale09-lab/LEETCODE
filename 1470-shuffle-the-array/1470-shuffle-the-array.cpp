class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> nums1;

        for(int i = 0; i < n ; i++){
            nums1.push_back(nums[i]);
            nums1.push_back(nums[n+i]);
        }

        return nums1;
        
    }
};