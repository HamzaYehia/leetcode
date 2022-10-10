class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string firstString = strs[0];
        
        for (int i = 1; i < strs.size(); i++) {
            
            while (strs[i].find(firstString) != 0) {
                firstString = firstString.substr(0, firstString.length() - 1);
            }
            
            if (firstString == "") break;
        }
        
        return firstString;
    }
};