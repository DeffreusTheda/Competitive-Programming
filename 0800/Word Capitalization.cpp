#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;
    std::cin>>s;
    for(std::size_t i=0; i<s.length(); ++i) {
        if(i==0)
            std::cout<<static_cast<char>(std::toupper(s[i]));
        else
            std::cout<<s[i];
    }

    return 0;
}
