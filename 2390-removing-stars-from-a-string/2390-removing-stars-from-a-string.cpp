class Solution {
public:
    string removeStars(string s) {
        string newstr = "";
        
        for(char ch : s){
            if(ch == '*'){
                newstr.pop_back();
            }else{
                newstr.push_back(ch);
            }
        }

        return newstr;

        
    }
};