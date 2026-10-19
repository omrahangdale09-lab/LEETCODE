class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> nums1;
        for(int x : nums){
            nums1.push_back(x);
        }
        for(int x : nums){
            nums1.push_back(x);
        }
        return nums1;
    }
};