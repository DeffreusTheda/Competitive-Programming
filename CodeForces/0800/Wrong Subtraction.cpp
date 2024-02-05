#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::uint_fast64_t n;
    std::uint_fast8_t k;
    scanf("%llu %hhu", &n, &k);
    for(std::size_t i=0; i<k; ++i)
        n%10==0 ? n/=10 : --n;
    printf("%llu", n);

    return 0;
}
