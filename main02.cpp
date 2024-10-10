#include <iostream>
#include "PrefixMatcher.h"

int main() {
    PrefixMatcher prefixMatcher;

    // Insert network addresses and their associated router numbers
    prefixMatcher.insert("1100110111", 1);
    prefixMatcher.insert("110011011", 2);
    prefixMatcher.insert("11001101", 3);

    // Test with an incoming packet destination address
    std::string networkAddress = "110011011001";
    int routerNumber = prefixMatcher.selectRouter(networkAddress);

    std::cout << "The router for network address " << networkAddress << " is Router " << routerNumber << std::endl;

    return 0;
}