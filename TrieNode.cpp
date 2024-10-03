#include "TrieNode.h"

TrieNode::TrieNode(char c)
{
    this -> data = c;
    for (int i = 0; i < 26; ++i) {
        children[i] = nullptr;
    }
    isEndOfWord = false;
    routerNumber = -1;
}