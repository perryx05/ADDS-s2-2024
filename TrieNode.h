#ifndef TRIENODE_H
#define TRIENODE_H

#include <vector>


struct TrieNode
{
    char data;
    bool isEndOfWord;
    int routerNumber;
    TrieNode *children[26];
    TrieNode(char c = '\0');
};


#endif
