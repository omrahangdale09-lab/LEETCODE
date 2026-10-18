class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n ; i+=2){
            for(int j = 0; j+2 < n; j +=2){
                if(nums[j] > nums[j+2]){
                    swap(nums[j], nums[j+2]);
                }
            }
        }

        for(int i = 1; i < n; i+=2){
            for(int j = 1; j+2 < n ; j+=2){
                if(nums[j] < nums[j+2]){
                    swap(nums[j], nums[j+2]);
                }
            }
        }


        return nums;

        
    }
};