class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set <int> res;

        for(int num1 : nums1){
            for(int num2 : nums2){
                if(num1 == num2){
                    res.insert(num1);
                }
            }
        }


        vector <int> ans(res.begin(), res.end());

        return ans;

    }
};