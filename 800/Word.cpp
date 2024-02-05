#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;
    std::cin>>s;
    std::uint_fast8_t c=0;
    for(char x : s)
        if(x>=65 && x<=90) ++c;
    if(c>s.length()-c)
        for(char x : s)
            printf("%c", std::toupper(x));
    else for(char x : s)
        printf("%c", std::tolower(x));

    return 0;
}
