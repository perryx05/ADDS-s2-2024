#include "Finder.h"


int main (){
    Finder f;
    std::string s1 = "4634554567";
    std::string s2 = "45689";
    std::vector<int> result = f.findSubstrings(s1, s2);
    for (size_t i = 1; i <= result.size(); i++) {
        std::cout << result[i-1] << std::endl;
    }
}