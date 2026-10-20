class Solution {
public:
    int sumOfMultiples(int n) {
        vector <int> num1;

        for(int i = 1 ; i<=n; i++){
            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
                num1.push_back(i);
            }
        }

        int sum = 0;
        for(int x : num1){
            sum += x;
        }

        return sum;
    }
};