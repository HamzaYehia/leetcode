class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_multiset<int> magazineChars;

        for (char i : magazine) magazineChars.insert(i);

        for (char i : ransomNote) {
            if (magazineChars.find(i) != magazineChars.end()) {
                magazineChars.extract(i);
            }
            else {
                return false;
            }
        }

        return true;
    }
};