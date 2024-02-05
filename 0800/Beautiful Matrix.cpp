#include <cstdio>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::int_fast8_t cur;
    for(std::int_fast8_t i=1; i<=5; ++i)
        for(std::int_fast8_t j=1; j<=5; ++j) {
            scanf("%hhd", &cur);
            if(cur==1) {
                printf("%hhu", static_cast<std::uint_fast8_t>(std::abs(3-i) + std::abs(3-j)));
                return 0;
            }
        }
}
/*0 0 0 0 0   0 0 0 0 1   0 0 0 0 0   0 0 0 0 0   0 0 0 0 0*/