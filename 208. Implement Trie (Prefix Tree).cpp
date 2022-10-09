/**
 * @problem name: Implement Trie (Prefix Tree)
 * @problem link: https://leetcode.com/problems/implement-trie-prefix-tree/
 *
 * @time complexity: O(L) Length of the input word
 * @space complexity: O(T) number of Trie nodes
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Oct-09
 */


class Trie {
private:
    Trie* children[26] = { nullptr };
    bool isEndOfWord = false;

public:
    void insert(string word) {
        Trie* current = this;

        for (char child : word) {
            child -= 'a';

            if (current->children[child] == nullptr) {
                current->children[child] = new Trie();
            }
            current = current->children[child];
        }

        current->isEndOfWord = true;
    }

    bool search(string word) {
        Trie* current = this;

        for (char child : word) {
            child -= 'a';
            if (current->children[child] == nullptr) {
                return false;
            }

            current = current->children[child];
        }

        return current->isEndOfWord;
    }

    bool startsWith(string prefix) {
        Trie* current = this;

        for (char child : prefix) {
            child -= 'a';

            if (current->children[child] == nullptr) {
                return false;
            }

            current = current->children[child];
        }

        return true;
    }

};