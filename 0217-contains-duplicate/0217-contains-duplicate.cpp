class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set <int> num1;

        for(int x : nums){
            num1.insert(x);
        }
        if(num1.size() == nums.size()){
            return false;
        }else{
            return true;

        }

    }
};