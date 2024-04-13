#include <iostream>
#include <vector>

using namespace std;

struct TrieNode {
    vector<TrieNode*> children;
    bool isWord;

    TrieNode() {
        children.resize(26);
        isWord = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* curr = root;
        for (char c : word) {
            int index = c - 'a';
            if (curr->children[index] == nullptr) {
                curr->children[index] = new TrieNode();
            }
            curr = curr->children[index];
        }
        curr->isWord = true;
    }

    bool search(string word) {
        TrieNode* curr = root;
        for (char c : word) {
            int index = c - 'a';
            if (curr->children[index] == nullptr) {
                return false;
            }
            curr = curr->children[index];
        }
        return curr->isWord;
    }

    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for (char c : prefix) {
            int index = c - 'a';
            if (curr->children[index] == nullptr) {
                return false;
            }
            curr = curr->children[index];
        }
        return true;
    }
};

int main() {
    Trie trie;

    trie.insert("apple");
    trie.insert("banana");
    trie.insert("cherry");

    cout << trie.search("apple") << endl;
    cout << trie.search("banana") << endl; 
    cout << trie.search("cherry") << endl; 
    cout << trie.search("dog") << endl;

    cout << trie.startsWith("che") << endl; 
    cout << trie.startsWith("dog") << endl; 

    return 0;
}