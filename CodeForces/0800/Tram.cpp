#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::uint_fast64_t min=0, cur=0;
    std::uint_fast16_t n;
    scanf("%hu", &n);
    for(std::size_t i=0; i<n; ++i) {
        std::uint_fast16_t exit, enter;
        scanf("\n%hu %hu", &exit, &enter);
        cur+=(enter-exit);
        if(cur>min) min=cur;
    }
    printf("%llu", min);

    return 0;
}
