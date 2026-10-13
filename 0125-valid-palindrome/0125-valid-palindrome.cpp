class Solution {
public:
    bool isPalindrome(string s) {
        string org = "";

        for(char ch : s){
            if(isalnum(ch)){
                org += tolower(ch);
            }
        }

        string rev = org;

        int low = 0;
        int high = rev.size() - 1;
        while(low < high){
            swap(rev[low], rev[high]);
            low++;
            high--; 
        }
        return org == rev;
    }
};