#include <iostream>
#include "Autocomplete.h"

int main() {
    Autocomplete autocomplete;
    autocomplete.insert("bin");
    autocomplete.insert("ball");
    autocomplete.insert("ballet");

    std::vector<std::string> suggestions;

    suggestions = autocomplete.getSuggestions("b");
    std::cout << "Suggestions for 'b': ";
    for (const std::string& suggestion : suggestions) {
        std::cout << suggestion << " ";
    }
    std::cout << std::endl;

    suggestions = autocomplete.getSuggestions("ba");
    std::cout << "Suggestions for 'ba': ";
    for (const std::string& suggestion : suggestions) {
        std::cout << suggestion << " ";
    }
    std::cout << std::endl;

    suggestions = autocomplete.getSuggestions("bal");
    std::cout << "Suggestions for 'bal': ";
    for (const std::string& suggestion : suggestions) {
        std::cout << suggestion << " ";
    }
    std::cout << std::endl;

    suggestions = autocomplete.getSuggestions("balle");
    std::cout << "Suggestions for 'balle': ";
    for (const std::string& suggestion : suggestions) {
        std::cout << suggestion << " ";
    }
    std::cout << std::endl;

    return 0;
}