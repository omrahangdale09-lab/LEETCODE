class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector <int> num1;
        for (int x : nums){

            vector<int> temp;
            while(x != 0){
                int digit = x % 10;
                temp.push_back(digit);
                x = x / 10;

                
        
            }
            for(int i = temp.size() - 1; i >= 0 ; i--){
            num1.push_back(temp[i]);
            }

        }
 


        
        return num1;
        
    }
};