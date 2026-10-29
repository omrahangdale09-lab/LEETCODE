class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        vector <int> num1;
        int sum = 0;
 
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            num1.push_back(sum);
        }
        for(int k = 0 ; k < nums.size(); k++){
            nums[k] = num1[k];
        }

        return nums;
      
    }
};