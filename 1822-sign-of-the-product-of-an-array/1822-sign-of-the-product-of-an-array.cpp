class Solution {
public:
    int arraySign(vector<int>& nums) {

       int product = 1;
       for(int x : nums){
         

            if(x == 0){
                return 0;
            }
            if(x < 0){
                product *= -1;
            }
           
       }

       return product; 
        
    }
};