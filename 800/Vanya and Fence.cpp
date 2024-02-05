#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::uint_fast16_t n, h, r=0;
    scanf("%hu %hu", &n, &h);
    for(std::size_t i=0; i<n; ++i) {
        std::uint16_t tmp;
        scanf("%hu", &tmp);
        tmp > h ? r+=2 : ++r;
    }
    printf("%hu", r);

    return 0;
}
