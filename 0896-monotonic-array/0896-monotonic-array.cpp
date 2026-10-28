class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool isincreasing = true;
        bool isdecreasing = true;
        for(int i = 0; i < n-1; i++){
            if(nums[i] > nums[i+1]){
                isincreasing = false;
            }
            if(nums[i] < nums[i+1]){
                isdecreasing = false;
            }
        } 
        return isincreasing || isdecreasing;
        
    }
};