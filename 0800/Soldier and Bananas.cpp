#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::uint_fast16_t k, w;
    std::uint_fast64_t n, s=0;
    scanf("%hu %llu %hu", &k, &n, &w);
    for(long long i=1; i<=w; ++i)
        s += k*i;
    std::int_fast64_t r = s-n;
    if(r<0)
        r=0;
    printf("%lli", r);

    return 0;
}
