class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter = 0;
        
        set<char> chars;
        for (char i : jewels) chars.insert(i);

        for (char i : stones) {
            if (chars.find(i) != chars.end()) counter++;
        }

        return counter;
    }
};