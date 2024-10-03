#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>
#include <queue>
#include "TrieNode.h"

class Autocomplete {
    private:
    TrieNode *root;
    void getWords(TrieNode *node, std::string prefix,std::vector<std::string> &words);
    public:
    Autocomplete();
    std::vector<std::string> getSuggestions(std::string partialWord);
    void insert(std::string word);

};
#endif