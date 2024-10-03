#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {
    root = new TrieNode('\0'); // Alphabetic Trie, so size is 26
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    TrieNode* current = root;
    for (char c : address) {
        int index = c - '0'; // Convert '0' or '1' to 0 or 1
        if (current->children[index] == nullptr) {
            current->children[index] = new TrieNode(c);
        }
        current = current->children[index];
    }
    current->isEndOfWord = true;
    current->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* current = root;
    int longestMatchRouter = -1;
    for (char c : networkAddress) {
        int index = c - '0'; // Convert '0' or '1' to 0 or 1
        if (current->children[index] == nullptr) {
            break;
        }
        current = current->children[index];
        if (current->isEndOfWord) {
            longestMatchRouter = current->routerNumber;
        }
    }
    return longestMatchRouter;
}