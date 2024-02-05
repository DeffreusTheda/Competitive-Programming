#include <cstdio>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string a, b;
    std::cin>>a>>b;
    for(auto &x : a)
        x = static_cast<char>(std::tolower(x));
    for(auto &x : b)
        x = static_cast<char>(std::tolower(x));
    a==b ? printf("0") : a>b ? printf("1") : printf("-1");

    return 0;
}