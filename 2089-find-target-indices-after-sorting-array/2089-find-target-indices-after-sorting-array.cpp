class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector <int> num1;
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                num1.push_back(i);
                
            }
        }


        return num1;


        
    }
};