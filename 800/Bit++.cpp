#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::uint_fast8_t n;
    scanf("%hhu", &n);
    std::int_fast16_t res = 0;
    std::string s;
    while(std::cin >> s) {
        const char* c = s.c_str();
        if(c[1] == '+')
            ++res;
        if(c[1] == '-')
            --res;
    }
    printf("%hi", res);

    return 0;
}
