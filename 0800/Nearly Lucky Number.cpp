#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;
    std::cin>>s;
    std::uint_fast8_t r=0;
    for(char c : s)
        if(c=='4'||c=='7')
            ++r;
    r==4||r==7 ? printf("YES") : printf("NO");

    return 0;
}
