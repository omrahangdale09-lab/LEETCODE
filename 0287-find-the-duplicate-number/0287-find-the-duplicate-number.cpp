class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int cm = 1;
        int officer = 0;
        int res;
    
        while(cm < nums.size()){
            if(nums[cm] == nums[cm-1]){
                return nums[cm];
            }
            cm++;
        }

        return -1;

    }
};