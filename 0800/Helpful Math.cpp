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
    s.erase(std::remove(s.begin(), s.end(), '+'), s.end());
    std::sort(s.begin(), s.end());
    for(std::size_t x=0; x<s.length(); ++x) {
        std::cout<<s[x];
        if(x!=s.length()-1)
            std::cout<<'+';
    }

    return 0;
}
