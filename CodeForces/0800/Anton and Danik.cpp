#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::uint_fast32_t n, c=0;
    std::string s;
    std::cin>>n>>s;
    for(char x : s)
        if(x=='A')
            ++c;
    c==s.length()-c ? printf("Friendship") : c>s.length()-c ? printf("Anton") : printf("Danik");

    return 0;
}
