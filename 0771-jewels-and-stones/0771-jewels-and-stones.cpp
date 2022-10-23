class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter = 0;

        unordered_set<char> jewelsSet;
        for (char i : jewels) {
            jewelsSet.insert(i);
        }

        for (char i : stones) {
            if (jewelsSet.find(i) != jewelsSet.end()) counter++;
        }

        return counter;
    }
};