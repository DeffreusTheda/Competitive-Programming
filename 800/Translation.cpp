#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s, t;
    std::cin>>s>>t;
    std::string p=s;
    std::size_t id=0;
    for(int i=s.length()-1; i>=0; --i) {
        p[id] = s[i];
        ++id;
    }
    p==t ? printf("YES") : printf("NO");

    return 0;
}
