#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::uint_fast8_t m, n;
    std::uint_fast16_t res = 0;
    scanf("%hhi %hhi", &m, &n);
    for(std::uint_fast8_t i = 0; i < m/2; ++i)
        for(std::uint_fast8_t j = 0; j < n; ++j)
            ++res;
    if(m%2==1) res += n/2;
    printf("%hi", res);

    return 0;
}
