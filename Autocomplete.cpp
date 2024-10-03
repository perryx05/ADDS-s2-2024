#include "Autocomplete.h"

Autocomplete::Autocomplete()
{
    root = new TrieNode('\0');
}

void Autocomplete ::insert(std::string word){
    TrieNode *current = root;
    for (char c : word){
        if (current->children[c - 'a']==nullptr){
            current->children[c -'a'] = new TrieNode(c);
        }
        current = current-> children[c - 'a'];
    }
    current->isEndOfWord = true;

}
void Autocomplete::getWords(TrieNode *node, std::string prefix, std::vector<std::string> &words){
    if (node->isEndOfWord){
        words.push_back(prefix);
    }
    for (int i = 0; i < 26; ++i){
        if (node->children[i] != nullptr){
            getWords(node->children[i], prefix + node->children[i]->data, words);
        }
    }
}
std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord){
    std::vector<std::string> words;
    TrieNode *current = root;
    for (char c : partialWord){
        if (current->children[c - 'a'] == nullptr){
            return words;
        }
        current = current->children[c - 'a'];
    }
    getWords(current, partialWord, words);
    return words;
}