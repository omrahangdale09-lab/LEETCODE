class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> num1;

        for(int x : nums){
            if(x % 2 == 0){
                num1.push_back(x);
            }
           
        }

        for(int x : nums){
            if(x % 2 != 0){
                num1.push_back(x);
            }
        }
        

        return num1;
    }
};