#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::uint_fast32_t x;
    scanf("%u", &x);
    std::uint_fast32_t const r = x%5>0 ? 1 : 0;
    printf("%u", x/5+r);

    return 0;
}
